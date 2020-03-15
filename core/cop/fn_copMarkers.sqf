private _markers = [];
private _units = [];

{
            if ("ItemGPS" in (assignedItems _x)) then {
                _displayText = name _x;
            _units pushBack ["ColorBLUFOR",_x,"Mil_dot",_displayText];
        };
} forEach units group player;

{
    if ((_x select 1) != player) then
    {
        if ((vehicle (_x select 1)) != (_x select 1)) then {
            if (driver (vehicle (_x select 1)) ==  (_x select 1)) then {
                _marker = createMarkerLocal [format["%1_marker",(_x select 1)],visiblePosition (_x select 1)];
                _marker setMarkerTextLocal format["%1 (+ %2)", (_x select 3), count (crew (vehicle (_x select 1)))];
            };
        } else {
            _marker = createMarkerLocal [format["%1_marker",(_x select 1)],visiblePosition (_x select 1)];
               _marker setMarkerColorLocal (_x select 0);
               _marker setMarkerTypeLocal (_x select 2);
               _marker setMarkerTextLocal format["%1", (_x select 3)];
               _markers pushBack [_marker,(_x select 1),_x select 3,_x select 2];
           };
    };
} forEach _units;

while {(_this select 0)} do
{
    if (!visibleMap) exitWith {{deleteMarkerLocal (_x select 0);} forEach _markers;};
    {
        private["_marker","_unit"];
        _marker = _x select 0;
        _unit = _x select 1;
        if !(_x select 3 isEqualTo "loc_Hospital") then {
            if (!isNil "_unit" && !isNull _unit) then
            {
                _marker setMarkerPosLocal (visiblePosition _unit);
            };
        };
    } forEach _markers;
    sleep 0.02;
};
