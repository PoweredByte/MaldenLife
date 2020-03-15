/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
	
	
//CUSTOM VERARBEITUNG //ANFANG
	class blei {
        MaterialsReq[] = {{"blei_unverarbeitet",1}};
        MaterialsGive[] = {{"blei_verarbeitet",1}};
        Text = "Blei Verarbeiten";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };
	class feuerstein {
        MaterialsReq[] = {{"feuerstein_unverarbeitet",1}};
        MaterialsGive[] = {{"feuerstein_verarbeitet",1}};
        Text = "Feuerstein Verarbeiten";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };
	class kaktus {
        MaterialsReq[] = {{"kaktus_unverarbeitet",1}};
        MaterialsGive[] = {{"kaktus_verarbeitet",1}};
        Text = "Kaktus Verarbeiten";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };
	class katzengold {
        MaterialsReq[] = {{"katzengold_unverarbeitet",1}};
        MaterialsGive[] = {{"katzengold_verarbeitet",1}};
        Text = "Katzengold Verarbeiten";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };
	class lavagestein {
        MaterialsReq[] = {{"lavagestein_unverarbeitet",1}};
        MaterialsGive[] = {{"lavagestein_verarbeitet",1}};
        Text = "Lavagestein Verarbeiten";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };
	class titanium {
        MaterialsReq[] = {{"titanium_unverarbeitet",1}};
        MaterialsGive[] = {{"titanium_verarbeitet",1}};
        Text = "Titanium Verarbeiten";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };
	class uran {
        MaterialsReq[] = {{"uran_unverarbeitet",1}};
        MaterialsGive[] = {{"uran_verarbeitet",1}};
        Text = "Kaktus Verarbeiten";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };
//CUSTOM VERARBEITUNG //ENDE

	
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 1350;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 1750;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 750;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 1120;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 1500;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 500;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
};
