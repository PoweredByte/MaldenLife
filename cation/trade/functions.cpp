/*
    File: functions.cpp
    Author: B4v4r!4n_Str!k3r (julianbauer@cationstudio.com)
    Licence: THIS FILE AND EXTRACTS OF IT IS THE MINDSET OF CATIONSTUDIO
             AND ONLY AUTHORIZED PEOPLE/SERVERS ARE ALLOWED TO USE IT.
    Description: functions for trade system. 
*/
class Cation_Trade {
    tag = "cat_trade";
    class functions {
        file = "cation\trade";        
        // Client        
        class abort {};
        class addBuyer {};
        class delVendor {};
        class getText {};
        class index {};
        class init { postInit = 1; };
        class isNumber {};
        class openBuyer {};
        class openVendor {};
        class openVendorLBItemChange {};
        class openVendorLBTypeChange {};
        class removeFromKeyChain {};
        class signBuyer {};
        class signVendor {};
        class StrToArray {};
        // Server
        class editServer {};
        // HC
        class editServerHC {};
    };
};