/*
    File: config.cpp
    Author: B4v4r!4n_Str!k3r (julianbauer@cationstudio.com)
    Licence: THIS FILE AND EXTRACTS OF IT IS THE MINDSET OF CATIONSTUDIO
             AND ONLY AUTHORIZED PEOPLE/SERVERS ARE ALLOWED TO USE IT.
    Description: Master config for trade system.
*/
#include "buyer.hpp"
#include "vendor.hpp"
class Cation_Trade {

    class language {
        #include "language.cpp"
    };

    DebugMode = 1; //Debug mode (0 = off | 1 = on)

    HeadlessSupport = 0; // Enable / Disable headless client support. Default: 1 (1 = Enabled / 0 = Disabled)

    version = 5; // version 3.1.4.8 -> 3 | version 4.0 - 4.3 -> 4 | version 4.4+ -> 5

    key = 36; //Key for opening the menu (https://community.bistudio.com/wiki/DIK_KeyCodes#German_keyboard)
    shift = 1; // 1 = true | 0 = false
    ctrl = 0; // 1 = true | 0 = false
    alt = 0; // 1 = true | 0 = false

    onlyFractionInternal = 1; // Restriction: Only players of the same fraction can trade with each other (1 = Enabled / 0 = Disabled)
                              // If disabled items can be traded with other fractions
};
