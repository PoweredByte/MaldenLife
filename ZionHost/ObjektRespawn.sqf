_Nombre_Numero_Objects_Respawn=0;
_Numero_Object=1;while {(not(isNil ("Object_Respawn_" + str _Numero_Object)))} do {_Numero_Object=_Numero_Object+1;};
if (_Numero_Object>1) then{_Nombre_Numero_Objects_Respawn=_Numero_Object-1;};
if (not(isNil ("Object_Respawn_"))) then {_Nombre_Numero_Objects_Respawn=1};

for "_Numero_Object" from 1 to _Nombre_Numero_Objects_Respawn do {

	_Numero_Object spawn{_Numero_Object= _this;
		//PARAMETRES__________________________________________________________________
		_temps_respawn_Objects_Moyen = 1; //TEMPS DE RESPAWN DU MUR
		_temps_rafraichissement_Moyen = 2; //TEMPS DE DISPARITION DES DECOMBRES
		_nombre_de_check_emplacement_vide=50;
		//____________________________________________________________________________
		
		_Object = call compile ("Object_Respawn_" + str _Numero_Object);
		_Type_Object = typeOf _Object;
		_position = getPosASL _Object;
		_direction = getDir _Object;
		
		while {true} do {
			
			sleep (_temps_rafraichissement_Moyen/2 max random (_temps_rafraichissement_Moyen*2));
			_iterations=0;
			
			while { ( ( ( (getDammage _Object) >0.9) || not( ( (getPosASL _Object) isEqualTo   _position) ) ) && not(_iterations>_nombre_de_check_emplacement_vide))} do {
				
				_iterations=_iterations+1;
				_Object setDammage 1;
				deleteVehicle _Object; 
				sleep (_temps_respawn_Objects_Moyen/2 max random (_temps_respawn_Objects_Moyen*2));
				_Object = _Type_Object createVehicle _position;
				_Object SetDir _direction;
			};
			
			if (_iterations>1) then {
				_Object SetPosASL _position;
			};
		};
	};
};