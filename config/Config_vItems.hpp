/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class adac {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "caropen","waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw","lockpick" };
    };
    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach","cprKit","lockpick" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class schwarzmarkt {
        name = "STR_Shops_Schwarzmarkt";
        side = "civ";
        conditions = "license_civ_schwarzmarkt";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge","cprKit","handcuffs","keys" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "caropen", "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit","handcuffs","keys","sos","lockpick","cprKit","schmerzmittel" };
    };
//CONFIG SHOPS //START
    class blei_shop {
        name = "BLEI SHOP";
        side = "civ";
        conditions = "";
        items[] = { "blei_verarbeitet","blei_unverarbeitet" };
    };
    class feuerstein_shop {
        name = "FEUERSTEIN SHOP";
        side = "civ";
        conditions = "";
        items[] = { "feuerstein_verarbeitet","feuerstein_unverarbeitet" };
    };
    class kaktus_shop {
        name = "KAKTUS SHOP";
        side = "civ";
        conditions = "";
        items[] = { "kaktus_verarbeitet","kaktus_unverarbeitet" };
    };
    class katzengold_shop {
        name = "KATZENGOLD SHOP";
        side = "civ";
        conditions = "";
        items[] = { "katzengold_verarbeitet","katzengold_unverarbeitet" };
    };
    class lavagestein_shop {
        name = "LAVAGESTEIN SHOP";
        side = "civ";
        conditions = "";
        items[] = { "lavagestein_verarbeitet","lavagestein_unverarbeitet" };
    };
    class titanium_shop {
        name = "TITANIUM SHOP";
        side = "civ";
        conditions = "";
        items[] = { "titanium_verarbeitet","titanium_unverarbeitet" };
    };
    class uran_shop {
        name = "URAN SHOP";
        side = "civ";
        conditions = "";
        items[] = { "uran_verarbeitet","uran_unverarbeitet" };
    };

//CONFIG SHOPS //ENDE
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 3000000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
    class caropen {
      variable = "caropen";
      displayName = "caropen";
      weight = 2;
      buyPrice = 1000;
      sellPrice = -1;
      illegal = false;
      edible = -1;
      icon = ""; };
    class machete {
        variable = "machete";
        displayName = "";
        weight = 2;
        buyPrice = 5000000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
    class trommel {
        variable = "trommel";
        displayName = "";
        weight = 2;
        buyPrice = 75000000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
    class stemmhammer {
        variable = "stemmhammer";
        displayName = "";
        weight = 2;
        buyPrice = 15000000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
    class kernbohrer {
        variable = "kernbohrer";
        displayName = "";
        weight = 2;
        buyPrice = 125000000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
    class taschenmesser {
        variable = "taschenmesser";
        displayName = "";
        weight = 2;
        buyPrice = 2500000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class schmerzmittel {
        variable = "schmerzmittel";
        displayName = "STR_Item_Schmerzmittel";
        weight = 2;
        buyPrice = 2000000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
		icon = "icons\ico_schmerzmittel.paa";
    };

    class beutel {
        variable = "beutel";
        displayName = "";
        weight = 2;
        buyPrice = 7000000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
/*    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };
*/
    class cprKit {
        variable = "cprKit";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 20000000;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

	class sos {
		variable = "sos";
		displayName = "STR_Item_SOS";
		weight = 1;
		buyPrice = 1500;
        sellPrice = 0;
		illegal = true;
		edible = -1;
		icon = "icons\ico_sosKnopf.paa";
	};

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class handcuffs {
        variable = "handcuffs";
        displayName = "STR_Item_lol";
        weight = 1;
        buyPrice = 25;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\cuffs.paa";
    };

    class keys {
        variable = "keys";
        displayName = "STR_Item_Keys";
        weight = 1;
        buyPrice = 25;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\icon_keys.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = 1500000;
        sellPrice = 1000000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 1250000;
        sellPrice = 900000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 5;
        buyPrice = -1;
        sellPrice = 3500000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };


//CUSTOM ITEMS //ANFANG
    class weintrauben {
        variable = "weintrauben";
        displayName = "STR_Item_Weintrauben";
        weight = 2;
        buyPrice = -1;
        sellPrice = 850000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };

    class blei_unverarbeitet {
        variable = "blei_unverarbeitet";
        displayName = "STR_Item_BleiUnverarbeitet";
        weight = 3;
        buyPrice = 600000;
        sellPrice = 550000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
    class blei_verarbeitet {
        variable = "blei_verarbeitet";
        displayName = "STR_Item_BleiVerarbeitet";
        weight = 2;
        buyPrice = 1200000;
        sellPrice = 1000000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
//
    class feuerstein_unverarbeitet {
        variable = "feuerstein_unverarbeitet";
        displayName = "STR_Item_FeuersteinUnverarbeitet";
        weight = 3;
        buyPrice = 1000000;
        sellPrice = 900000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
    class feuerstein_verarbeitet {
        variable = "feuerstein_verarbeitet";
        displayName = "STR_Item_FeuersteinVerarbeitet";
        weight = 2;
        buyPrice = 1600000;
        sellPrice = 1500000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
//
    class kaktus_unverarbeitet {
        variable = "kaktus_unverarbeitet";
        displayName = "STR_Item_KaktusUnverarbeitet";
        weight = 2;
        buyPrice = 800000;
        sellPrice = 700000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
    class kaktus_verarbeitet {
        variable = "kaktus_verarbeitet";
        displayName = "STR_Item_KaktusVerarbeitet";
        weight = 1;
        buyPrice = 1300000;
        sellPrice = 1200000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
//
    class katzengold_unverarbeitet {
        variable = "katzengold_unverarbeitet";
        displayName = "STR_Item_KatzengoldUnverarbeitet";
        weight = 4;
        buyPrice = 1500000;
        sellPrice = 1400000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
    class katzengold_verarbeitet {
        variable = "katzengold_verarbeitet";
        displayName = "STR_Item_KatzengoldVerarbeitet";
        weight = 2;
        buyPrice = 3000000;
        sellPrice = 2800000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
//
    class lavagestein_unverarbeitet {
        variable = "lavagestein_unverarbeitet";
        displayName = "STR_Item_LavagesteinUnverarbeitet";
        weight = 4
        buyPrice = 1200000;
        sellPrice = 1000000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
    class lavagestein_verarbeitet {
        variable = "lavagestein_verarbeitet";
        displayName = "STR_Item_LavagesteinVerarbeitet";
        weight = 3;
        buyPrice = 1700000;
        sellPrice = 1600000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
//
    class titanium_unverarbeitet {
        variable = "titanium_unverarbeitet";
        displayName = "STR_Item_TitaniumUnverarbeitet";
        weight = 7;
        buyPrice = 1300000;
        sellPrice = 1100000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
    class titanium_verarbeitet {
        variable = "titanium_verarbeitet";
        displayName = "STR_Item_TitaniumVerarbeitet";
        weight = 5;
        buyPrice = 1800000;
        sellPrice = 1700000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
//
    class uran_unverarbeitet {
        variable = "uran_unverarbeitet";
        displayName = "STR_Item_UranUnverarbeitet";
        weight = 14;
        buyPrice = 1300000;
        sellPrice = 1200000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
    class uran_verarbeitet {
        variable = "uran_verarbeitet";
        displayName = "STR_Item_UranVerarbeitet";
        weight = 12;
        buyPrice = 3800000;
        sellPrice = 3400000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };
//CUSTOM ITEMS //ENDE


};
