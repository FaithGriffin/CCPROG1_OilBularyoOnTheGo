/*12037893 Griffin, Faith (S12A)

*This version will only work with Windows because of the included windows library header file
that was used for the changeTextColor() function
*Included ASCII artworks were based from Christoper Johnson's ASCII art collection which
can be accessed through https://asciiart.website 
*Other ASCII artworks were generated using this website: shorturl.at/knIVY
*The changeTextColor() function was based from this website: shorturl.at/dns28 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/*Description: prints text with color
*Parameters: int value of text color
*Return Value: none (text with color)
*/
void changeTextColor(int nColor)
{
    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
    GetConsoleScreenBufferInfo(h, &csbiInfo);
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), nColor);
}

/*Description: prints the Game Title
*Parameters: none
*Return Value: none (displays Game Title)
*/
void displayGameTitle()
{
    changeTextColor(6);
    printf("\n\t\t\t\t\t\t\t\t      _____\t  /$$$$$$  /$$ /$$         /$$                 /$$\n"); 
    printf("\t\t\t\t\t\t\t\t     `.___,'\t /$$__  $$|__/| $$        | $$                | $$\n");
    printf("\t\t\t\t\t\t\t\t      (___)\t| $$  \\ $$ /$$| $$        | $$$$$$$  /$$   /$$| $$  /$$$$$$   /$$$$$$  /$$   /$$  /$$$$$$ \n");
    printf("\t\t\t\t\t\t\t\t      <   >\t| $$  | $$| $$| $$ /$$$$$$| $$__  $$| $$  | $$| $$ |____  $$ /$$__  $$| $$  | $$ /$$__  $$\n");
    printf("\t\t\t\t\t\t\t\t       ) (\t| $$  | $$| $$| $$|______/| $$  \\ $$| $$  | $$| $$  /$$$$$$$| $$  \\__/| $$  | $$| $$  \\ $$\n");
    printf("\t\t\t\t\t\t\t\t      /   \\\t| $$  | $$| $$| $$        | $$  | $$| $$  | $$| $$ /$$__  $$| $$      | $$  | $$| $$  | $$\n");
    printf("\t\t\t\t\t\t\t\t    / _    _\\\t|  $$$$$$/| $$| $$        | $$$$$$$/|  $$$$$$/| $$|  $$$$$$$| $$      |  $$$$$$$|  $$$$$$/\n");
    printf("\t\t\t\t\t\t\t\t   :,' `-.' `:\t \\______/ |__/|__/        |_______/  \\______/ |__/ \\_______/|__/       \\____  $$ \\______/\n");
    printf("\t\t\t\t\t\t\t\t   |         |\t      ~~~~             ~~~~~~~~                  ~~~~~~~               /$$  | $$\n");
    printf("\t\t\t\t\t\t\t\t   |         |\t~~~~         ~~~~~~      _     _     ~~~~~~~~~~       __ _   ~~~~~    |  $$$$$$/   ~~ ~~~\n");
    printf("\t\t\t\t\t\t\t\t   :         ;\t   ___   _ _      o O O | |_  | |_     ___     o O O / _` |  ___      \\______/\n");
    printf("\t\t\t\t\t\t\t\t    \\       /\t  / _ \\ | ' \\    o      |  _| | ' \\   / -_)   o      \\__, | / _ \\\n");
    printf("\t\t\t\t\t\t\t\t     `.___.'\t  \\___/ |_||_|  ||__[O] _\\__| |_||_|  \\___|  ||__[O] |___/  \\___/\n");
    printf("\t\t\t\t\t\t\t\t~~~~~~    ~~~\t _|\"\"\"\"\"_|\"\"\"\"\"|{======_|\"\"\"\"\"_|\"\"\"\"\"_|\"\"\"\"\"|{======_|\"\"\"\"\"_|\"\"\"\"\"|~~ ~~~~~ ~~~~~ ~~~~~ ~~~~~\n ");
    printf("\t\t\t\t\t\t\t\t~~~~~~~~~~~~~\t \"`-0-0-\"`-0-0-./o--000\"`-0-0-\"`-0-0-\"`-0-0-./o--000\"`-0-0-\"`-0-0-'~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

/*Description: prints the Main Menu
*Parameters: none
*Return Value: none (displays the Main Menu)
*/
void displayMainMenu()
{
    changeTextColor(3);
    printf("\t\t\t\t\t\t\t\t[[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]][[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]]-[[]]\n");
    printf("\t\t\t\t\t\t\t\t.-.`| `-/-.__/.-'\\_.-._,'/`-._'\\_.-._`-'_/-._.'|/.-'\\-.-.`| `-/-.__/.-'\\_.-._,'/`-._'\\_.-._`-'_/-._.'|/.-'\\-\n");
    printf("\t\t\t\t\t\t\t\t\\_.-`./`-._'\\__.-`-.__.-`--._/--.`-._\\`-._\\__.-)`-'._/\\_.-`./`-._'\\__.-`-.__.-`--._/--.`-._\\`-._\\__.-)`-'._/\n");
    printf("\t\t\t\t\t\t\t\t`._-'.\\_.---._-.\\_`-..`\\_.---._`-.__.-`'._.--./`-'._,'`._-'.\\_.---._-.\\_`-..`\\_.---._`-.__.-`'._.--./`-'._,'\n");
    printf("\t\t\t\t\t\t\t\t__/`.-/       `.'_`./`.'       '.\\__.-`.'         MAIN MENU          `.'_`./`.'       '.\\__.-`.'    (_.-\\_,-.\n");
    printf("\t\t\t\t\t\t\t\t `._-/'          |._.-|           |.'`.|  Press [1] Start a Sales Trip  |._.-|           |.'`.|       `(_.`-.\n");
    printf("\t\t\t\t\t\t\t\t .-',`)          | /`.|           |`-/`| Press [2] View the Top Ten List| /`.|           |`-/`|         ;.-'_\n");
    printf("\t\t\t\t\t\t\t\t `\\,-/           |\\.-'|           |\\-'`|      Press [0] Exit the Game   |\\.-'|           |\\-'`|          ;\\_\n");
    printf("\t\t\t\t\t\t\t\t  -./`._        [[[[[[[[         [[[[[[[[                              [[[[[[[[         [[[[[[[[         .',-'\n");
    printf("\t\t\t\t\t\t\t\t`.`--.~~-^_~-/.`-._`-.\\^~-_~-^/`-.'-,.'\\^~-~_^\"'`-.'_  `.`--.~~-^_~-/.`-._`-.\\^~-_~-^/`-.'-,.'\\^~-~_^\"'`-.'_\n");
    printf("\t\t\t\t\t\t\t\t-,.'\"-\"~^-~J ~. `  '   ~^-a.~^-.`_' `.-^~- . \"'\"-\"-\"\" -,.'\"-\"~^-~_ ~. `  '   ~^-i.~^-.`_' `.-^~- . \"'\"-\"-\"\"\n");
    printf("\t\t\t\t\t\t\t\t\"\"-'\"-\"\"-\"~- _~.^-~-^.-^m.- .^~.-_ ~-. ~^_-\"\"-\"\"-\"'-\" \"\"-'\"-\"\"-\"~- m~.^-~-^.-^_.- .^~.-_ ~-. ~^y-\"\"-\"\"-\"'-\"\n");
    printf("\t\t\t\t\t\t\t\t~~ \"t\"    ~o ^. - ~ -~^ - ~  ^~m ~     \"\"-\"'o' ~~ \"\"-\"-\"    ~- ^. - ~ -~^ - ~  ^~- ~     \"\"-\"'-'^-~-^.-^m.- .\n");
    printf("\n\n\n");
}

/*Description: prints the Actions Menu
*Parameters: none
*Return Value: none (displays the Actions Menu)
*/
void displayActionsMenu()
{
    changeTextColor(15);
    printf("                       _________________________________\n");
    printf("                      [_________________________________]\n");
    printf("                       {===============================}\n");
    printf("                    .-'                                '-.\n");
    printf("                   /                                      \\\n");
    printf("                  /||||||||||||||||||||||||||||||||||||||||\\\n");
    printf("                  |                                        |\n");
    printf("                  |              ACTIONS MENU              |\n");
    printf("                  |                                        |\n");
    printf("  _____    _____  |  _    _    Press [A] Buy  _    _   _   |\n");
    printf(" [IIIII]  [IIIII] |,' `-.' ` ,'Press [B] Sell' `-.' `,' `--|\n");
    printf("  )\"\"\"(    )\"\"\"(  |            Press [C] Make              |\n");
    printf(" /     \\  /     \\ |            Press [D] Pay Debt          |\n");
    printf("/       \\/       \\|            Press [E] Loan              |\n");
    printf("|`-...-'||`-...-'||            Press [F] Travel            |\n");
    printf("| oil<3 ||  oil<3|||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|`-...-'||`-...-'||                                        |\n");  
    printf(" `.___.'  `.___.''----------------------------------------'\n\n");
}

/*Description: prints the Buy Menu
*Parameters: none
*Return Value: none (displays the Buy Menu)
*/
void displayBuyMenu()
{
    changeTextColor(15);
    printf("%s", "||||||||||||||||||||||||||||||||||||||||\n");
    printf("%25s", "BUY MENU\n\n");
    printf("%25s", "Press [1] Buy Essential Oil/s\n");
    printf("%25s", "Press [0] Go back to Actions Menu\n");
    printf("%s", "||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: computes for a random number within the price range of EO bottle
*Parameters: nLower, nUpper, nCount
*Return Value: int (price of EO bottle-Step 1)
*/
int getPriceRangePerBottleEOStep1(int nLower, int nUpper, int nCount)
{
    int i; 
    //srand(time(0));
	for (i = 0; i < nCount; i++) 
    { 
		return (rand() % (nUpper - nLower + 1)) + nLower; 
	}
}

/*Description: computes for a random number between 0 and 1
*Parameters: none
*Return Value: double (random number between 0 and 1 that would later be used
to identfy what operation will be used in step 2 of generating price per bottle of EO)
*/
double getOperator()
{
    //srand((long)time(0));
    //srand(time(NULL));
    return rand()/(double)RAND_MAX;
}

/*Description: computes for a random number within a given range
*Parameters: nLower, nUpper, nCount
*Return Value: int (factor to be added to, subtracted from, 
or multiplied to random EO bottle price generated from step 1)
*/
int getFactor(int nLower, int nUpper, int nCount)
{
    int i;
    srand(time(0));
	for (i = 0; i < nCount; i++) 
    { 
		return (rand() % (nUpper - nLower + 1)) + nLower; 
	} 
}

/*Description: computes for the final price per bottle of EO
*Parameters: nLower, nUpper, nCount
*Return Value: int (final price per bottle of EO)
*/
int getPricePerBottleEOStep2(int nLower, int nUpper, int nCount)
{   
    int nPricePerBottleStep1 = getPriceRangePerBottleEOStep1(nLower, nUpper, nCount);
    int nLowerFactorMultiply = 102, nUpperFactorMultiply = 199, nCountFactorMultiply = 1;
    int nLowerFactorAddMinus = 2, nUpperFactorAddMinus = 49, nCountFactorAddMinus = 1;
    //srand((long)time(0));
    //srand(time(NULL));
    getOperator ();
    if (getOperator() < .35)
    {
        return nPricePerBottleStep1 + getFactor(nLowerFactorAddMinus, nUpperFactorAddMinus, nCountFactorAddMinus);
    }
    else if (getOperator() < .70)
    {
        return nPricePerBottleStep1 - getFactor(nLowerFactorAddMinus, nUpperFactorAddMinus, nCountFactorAddMinus);
    }
    else if (getOperator() < .90)
    {
        return nPricePerBottleStep1 * getFactor(nLowerFactorMultiply, nUpperFactorMultiply, nCountFactorMultiply);
    }
    else
    {
        return nPricePerBottleStep1;
    }
}

/*Description: computes for a random number within a given range 
*Parameters: nLowerNoBottle, nUpperNoBottle, nCountNoBottle
*Return Value: int (maximum no. of EO Bottles that the Player can Buy in a City)
*/
int getNoEOBottles(int nLowerNoBottle, int nUpperNoBottle, int nCountNoBottle)
{
    int i; 
	for (i = 0; i < nCountNoBottle; i++) 
    { 
		return (rand() % (nUpperNoBottle - nLowerNoBottle + 1)) + nLowerNoBottle;
	}
    //return outside
}

/*Description: prints the Buy Essential Oils Menu
*Parameters: nPriceBottleLemon, nPriceBottleLavender, nPriceBottleRosemary, nPriceBottleMint, 
nNoBottleLemon, nNoBottleLavender, nNoBottleRosemary, nNoBottleMint
*Return Value: none (displays the Buy Essential Oils Menu)
*/
void displayMenuBuyEO(int nPriceBottleLemon, int nPriceBottleLavender, int nPriceBottleRosemary, int nPriceBottleMint, int nNoBottleLemon, int nNoBottleLavender, int nNoBottleRosemary, int nNoBottleMint) 
{
    printf("%s", "\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("%45s", "BUY ESSENTIAL OILS MENU\n\n");
    printf("Press   EO          Available Bottles        Price/Bottle\n");
    printf("[1]     Lemon       %5d                     $%10d\n", nNoBottleLemon, nPriceBottleLemon);
    printf("[2]     Lavender    %5d                     $%10d\n", nNoBottleLavender, nPriceBottleLavender);
    printf("[3]     Rosemary    %5d                     $%10d\n", nNoBottleRosemary, nPriceBottleRosemary);
    printf("[4]     Mint        %5d                     $%10d\n", nNoBottleMint, nPriceBottleMint);
    printf("\n[0]     Go back to Actions Menu\n");
    printf("%s", "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: prints the Buy EO confirmation
*Parameters: none
*Return Value: none (displays the Buy EO confirmation choices)
*/
void displayBuyEO()
{
    printf("%s", "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("%25s", "Press [1] Buy Essential Oil/s\n");
    printf("%25s", "Press [0] Don't execute transaction. Go back to Actions Menu\n");
    printf("%s", "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: used to determine whether the player has
enough money to Buy Essential Oil/s
*Parameters: nCash, nBuyEOPrice
*Return Value: int (returns 1 if user has enough money to Buy,
else returns 0)
*/
int isBuyEOValid(int nCash, int nBuyEOPrice)
{
    if(nCash >= nBuyEOPrice) return 1;
    else return 0;
}

/*Description: used to check whether Sell Price of EO is valid
*Parameters: *nSellPriceLemon, *nSellPriceLavender, *nSellPriceRosemary, *nSellPriceMint
*Return Value: none (updates Sell Price to 0 if Sell Price generated is less than 1)
*/
void sellPriceChecker(int *nSellPriceLemon, int *nSellPriceLavender, int *nSellPriceRosemary, int *nSellPriceMint)
{
    if(*nSellPriceLemon < 1) *nSellPriceLemon = 0;
    if(*nSellPriceLavender < 1) *nSellPriceLavender = 0;
    if(*nSellPriceRosemary < 1) *nSellPriceRosemary = 0;
    if(*nSellPriceMint < 1) *nSellPriceMint = 0;
}

/*Description: used to check whether Sell Price of EO is valid
*Parameters: *nPriceBottleLemon, *nNoBottleLemon, *nPriceBottleLavender, *nNoBottleLavender, 
*nPriceBottleRosemary, *nNoBottleRosemary, nPriceBottleMint, *nNoBottleMint
*Return Value: none (updates Buy Price to 0 and Maximum No. of EO Bottle
available in a City to 0 if Sell Price generated is less than 1)
*/
void bottlePriceChecker(int *nPriceBottleLemon, int *nNoBottleLemon, int  *nPriceBottleLavender, int *nNoBottleLavender, int *nPriceBottleRosemary, int *nNoBottleRosemary, int *nPriceBottleMint, int *nNoBottleMint)
{
    if(*nPriceBottleLemon < 1) {*nNoBottleLemon = 0; *nPriceBottleLemon = 0;}
    if(*nPriceBottleLavender < 1) {*nNoBottleLavender = 0; *nPriceBottleLavender = 0;}
    if(*nPriceBottleRosemary < 1) {*nNoBottleRosemary = 0; *nPriceBottleRosemary = 0;}
    if(*nPriceBottleMint < 1) {*nNoBottleMint = 0; *nPriceBottleMint = 0;}
}

/*Description: prints the Sell Menu
*Parameters: none
*Return Value: none (displays the Sell Menu)
*/
void displaySellMenu()
{
    printf("%s", "||||||||||||||||||||||||||||||||||||||||\n");
    printf("%25s", "SELL MENU\n\n");
    printf("%25s", "Press [1] Sell Essential Oil/s\n");
    printf("%25s", "Press [2] Sell Diffuser Oil/s\n");
    printf("%25s", "Press [0] Go back to Actions Menu\n");
    printf("%s", "||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: prints the Sell Essential Oils Menu
*Parameters: none
*Return Value: none (displays the Sell Essential Oils Menu)
*/
void displaySellEOMenu()
{
    printf("%s", "\n||||||||||||||||||||||||||||||||||||||||\n");
    printf("%35s", "SELL ESSENTIAL OILS MENU\n\n");
    printf("Press\n");
    printf("[1]     Lemon\n");
    printf("[2]     Lavender\n");
    printf("[3]     Rosemary\n");
    printf("[4]     Mint\n");
    printf("\n[0]     Go back to Actions Menu\n");
    printf("%s", "||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: prints the Sell EO confirmation
*Parameters: none
*Return Value: none (displays the Sell EO confirmation choices)
*/
void displaySellEO()
{
    printf("%s", "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("%25s", "Press [1] Sell Essential Oil/s\n");
    printf("%25s", "Press [0] Don't execute transaction. Go back to Actions Menu\n");
    printf("%s", "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: prints the Sell Diffuser Oils Menu
*Parameters: none
*Return Value: none (displays the Sell Diffuser Oils Menu)
*/
void displaySellDOMenu()
{
    printf("%s", "||||||||||||||||||||||||||||||||||||||||\n");
    printf("%35s", "SELL DIFFUSER OILS MENU\n\n");
    printf("Press\n");
    printf("[1]     Clear Minds\n");
    printf("[2]     Energy Booster\n");
    printf("[3]     Calming\n");
    printf("\n[0]     Go back to Actions Menu\n");
    printf("%s", "||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: prints the Sell DO confirmation
*Parameters: none
*Return Value: none (displays the Sell DO confirmation choices)
*/
void displaySellDOConfirmation()
{
    printf("%s", "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("%25s", "Press [1] Sell Diffuser Oil/s\n");
    printf("%25s", "Press [0] Don't execute transaction. Go back to Actions Menu\n");
    printf("%s", "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: computes for the maximum bottles of Clear Minds
the player can make based on their current invetory
*Parameters: nStockLemonDrops, nStockRosemaryDrops, nStockMintDrop
*Return Value: int (maximum number of Clear Minds the player can make)
*/
int getMaxNoBottleCMinds(int nStockLemonDrops, int nStockRosemaryDrops, int nStockMintDrops)
{
    int nMaxNoBottle = 0;
    while (nStockLemonDrops >= 3 && nStockRosemaryDrops >= 2 && nStockMintDrops >= 2) 
    {
        nStockLemonDrops -= 3;
        nStockRosemaryDrops -= 2;
        nStockMintDrops -= 2;
        nMaxNoBottle++;
    }
    return nMaxNoBottle;
}

/*Description: computes for the maximum bottles of Energy Booster
the player can make based on their current invetory
*Parameters: nStockLemonDrops, nStockRosemaryDrops, nStockMintDrops
*Return Value: int (maximum number of Energy Booster the player can make)
*/
int getMaxNoBottleEBooster(int nStockLemonDrops, int nStockRosemaryDrops, int nStockMintDrops)
{
    int nMaxNoBottle = 0;
    while (nStockLemonDrops >= 1 && nStockRosemaryDrops >= 1 && nStockMintDrops >= 1) 
    {
        nStockLemonDrops -= 1;
        nStockRosemaryDrops -= 1;
        nStockMintDrops -= 1;
        nMaxNoBottle++;//10
    }
    return nMaxNoBottle;
}

/*Description: computes for the maximum bottles of Calming
the player can make based on their current invetory
*Parameters: nStockLemonDrops, nStockLavenderDrops, nStockRosemaryDrops
*Return Value: int (maximum number of Calming the player can make)
*/
int getMaxNoBottleCalm(int nStockLemonDrops, int nStockLavenderDrops, int nStockRosemaryDrops)
{
    int nMaxNoBottle = 0;
    while (nStockLemonDrops >= 1 && nStockLavenderDrops >= 3 && nStockRosemaryDrops >= 2) 
    {
        nStockLemonDrops -= 1;
        nStockLavenderDrops -= 3;
        nStockRosemaryDrops -= 2; 
        nMaxNoBottle++;
    }
    return nMaxNoBottle;
}

/*Description: computes for the selling price per unit of Clear Minds
*Parameters: nSellPriceLemon, nSellPriceRosemary, nSellPriceMint
*Return Value: int (Sell Price per Unit of Clear Minds)
*/
int getSellPriceBottleCMinds(int nSellPriceLemon, int nSellPriceRosemary, int nSellPriceMint)
{
    int nSellPriceDO;
    nSellPriceDO = 1.15 * (3 * nSellPriceLemon + (2 * nSellPriceRosemary) + (2 * nSellPriceMint));
    return nSellPriceDO;
}

/*Description: computes for the selling price per unit of Energy Booster
*Parameters: nSellPriceLemon, nSellPriceRosemary, nSellPriceMint
*Return Value: int (Sell Price per Unit of Energy Booster)
*/
int getSellPriceBottleEBooster(int nSellPriceLemon, int nSellPriceRosemary, int nSellPriceMint)
{
    int nSellPriceDO;
    nSellPriceDO = 1.15 * (1 * nSellPriceLemon + (1 * nSellPriceRosemary) + (1 * nSellPriceMint));
    return nSellPriceDO;
}

/*Description: computes for the selling price per unit of Calming
*Parameters: nSellPriceLemon, nSellPriceLavender, nSellPriceRosemary
*Return Value: int (Sell Price per Unit of Calming)
*/
int getSellPriceBottleCalm(int nSellPriceLemon, int nSellPriceLavender, int nSellPriceRosemary)
{
    int nSellPriceDO;
    nSellPriceDO = 1.15 * (1 * nSellPriceLemon + (3 * nSellPriceLavender) + (2 * nSellPriceRosemary));
    return nSellPriceDO;
}

/*Description: prints the Make Diffuser Oils Menu
*Parameters: nStockLemonDrops, nStockLavenderDrops, nStockRosemaryDrops, 
nStockMintDrops, nNoBottleCMinds, nNoBottleEBooster, nNoBottleCalm
*Return Value: none (displays Make Diffuser Oils Menu)
*/
void displayMakeDOMenu(int nStockLemonDrops, int nStockLavenderDrops, int nStockRosemaryDrops, int nStockMintDrops, int nNoBottleCMinds, int nNoBottleEBooster, int nNoBottleCalm)
{
    printf("%s", "|||||||||||||||||||||||||||||||||||||||||||\n");
    printf("%34s", "MAKE DIFFUSER OILS MENU\n\n");
    if(nStockLemonDrops > 0 && nStockRosemaryDrops > 0)
    {
        printf("Press                  Maximum No. Bottles\n");
        if(nStockLemonDrops >= 3 && nStockRosemaryDrops >= 2 && nStockMintDrops >= 2) 
            printf("[1]     Clear Minds      %d\n", nNoBottleCMinds);
        if(nStockLemonDrops >= 1 && nStockRosemaryDrops >= 1 && nStockMintDrops >= 1) 
            printf("[2]     Energy Booster  %d\n", nNoBottleEBooster);
        if(nStockLemonDrops >= 1 && nStockLavenderDrops >= 3 && nStockRosemaryDrops >= 2) 
            printf("[3]     Calming          %d\n", nNoBottleCalm);
    }
    else printf("Oopsie. You don't have enough Essential Oils :((\n");
    printf("\n[0]     Go back to Actions Menu\n");
    printf("%s", "|||||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: used to determine whether the player
entered a valid number of DO bottles to make
*Parameters: nNoBottleMakeDO, nNoBottleDO
*Return Value: int (returns 1 if user entered a valid number
of DO bottles to make(player's input <= maximum number of DO bottles the player can make)
else returns 0)
*/
int isMakeDOValid(int nNoBottleMakeDO, int nNoBottleDO)
{
    if(nNoBottleMakeDO <= nNoBottleDO) return 1;
    else return 0;
}

/*Description: prints the Make DO confirmation
*Parameters: none
*Return Value: none (displays the Make DO confirmation choices)
*/
void displayConfirmMakeDOMenu()
{
    printf("%s", "||||||||||||||||||||||||||||||||||||||||\n");
    printf("%25s", "Press [1] Make Diffuser Oil/s\n");
    printf("%25s", "Press [0] Don't make. Go back to Actions Menu\n");
    printf("%s", "||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: computes for a random number within a given range
*Parameters: nLowerCity, nUpperCity, nCountCity
*Return Value: int (Make DO charge per range of city)
*/
int getRandCityCharge (int nLowerCity, int nUpperCity, int nCountCity)
{
    int i;
	for (i = 0; i < nCountCity; i++) 
    { 
		return (rand() % (nUpperCity - nLowerCity + 1)) + nLowerCity; 
	}
}

/*Description: gets random Make DO charge based on city 
*Parameters: nCity
*Return Value: int (Make DO charge based on city)
*/
int getCityCharge(int nCity)
{
    int nCityCharge;
    int nLowerManila = 20, nUpperManila = 30, nCountManila = 1;
    int nLowerMakati = 80, nUpperMakati = 100, nCountMakati = 1;
    int nLowerAlabang = 70, nUpperAlabang = 90, nCountAlabang = 1;
    int nLowerQC = 40, nUpperQC = 60, nCountQC = 1;
    if(nCity == 1) return nCityCharge = getRandCityCharge(nLowerManila, nUpperManila, nCountManila);
    else if(nCity == 2) return nCityCharge = getRandCityCharge(nLowerAlabang, nUpperAlabang, nCountAlabang);
    else if(nCity == 3) return nCityCharge = getRandCityCharge(nLowerMakati, nUpperMakati, nCountMakati);
    else if(nCity == 4) return nCityCharge = getRandCityCharge(nLowerQC, nUpperQC, nCountQC);
}

/*Description: updates Stock on Hand of Essential Oils based on number of 
Clear Minds unit/s made 
*Parameters: nNoBottleMakeDO, *nStockLemonDrops, *nStockRosemaryDrops, *nStockMintDrops
*Return Value: none (updates Stock on Hand of Essential Oils)
*/
void updateEOStockCMinds(int nNoBottleMakeDO, int *nStockLemonDrops, int *nStockRosemaryDrops, int *nStockMintDrops)
{
    while (nNoBottleMakeDO > 0)
    {
        *nStockLemonDrops -= 3;
        *nStockRosemaryDrops -= 2;
        *nStockMintDrops -= 2;
        nNoBottleMakeDO--;
    }
}

/*Description: updates Stock on Hand of Essential Oils based on number of 
Energy Booster unit/s made 
*Parameters: nNoBottleMakeDO, *nStockLemonDrops, *nStockRosemaryDrops, *nStockMintDrops
*Return Value: none (updates Stock on Hand of Essential Oils)
*/
void updateEOStockEBooster(int nNoBottleMakeDO, int *nStockLemonDrops, int *nStockRosemaryDrops, int *nStockMintDrops)
{
    while (nNoBottleMakeDO > 0)
    {
        *nStockLemonDrops -= 1;
        *nStockRosemaryDrops -= 1;
        *nStockMintDrops -= 1;
        nNoBottleMakeDO--;
    }
}

/*Description: updates Stock on Hand of Essential Oils based on number of 
Calming unit/s made 
*Parameters: nNoBottleMakeDO, *nStockLemonDrops, *nStockLavenderDrops, *nStockRosemaryDrops
*Return Value: none (updates Stock on Hand of Essential Oils)
*/
void updateEOStockCalm(int nNoBottleMakeDO, int *nStockLemonDrops, int *nStockLavenderDrops, int *nStockRosemaryDrops)
{
    while (nNoBottleMakeDO > 0)
    {
        *nStockLemonDrops -= 1;
        *nStockLavenderDrops -= 3;
        *nStockRosemaryDrops -= 2;
        nNoBottleMakeDO--;
    }
}

/*Description: prints Pay Debt Menu 
*Parameters: nDebt
*Return Value: none (displays the Pay Debt Menu)
*/
void displayPayDebtMenu(int nDebt)
{
    printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("%40s", "PAY DEBT MENU\n\n");
    printf("~~      ~    _____                 ~\n");
    printf(" ___..--\"\"      `.  ~                   ~           ~\n");
    printf("_..-'               ,'                  O\n");
    printf("                  ,'             ~~    o          ~~\n");
    printf("   (|\\          ,'   ~   ______________________________________\n");
    printf("      ________,'        (_My Boss Shark said you must Pay $%d!_)\n", nDebt);
    printf("   ,.`/`./\\/`/      _.^._ `/                                  ~\n");
    printf("  /-'            |\\/ ,, o\\    NoO\n");
    printf("   `',^/\\/\\       >._``,_< oOh       ~\n");
    printf("_________,'         `' `/\n");
    printf("            ~~~~     ~~~~~~           ~~~~~~~~   ~~\n");
    printf("~~~~     ~      ~~~~~~~  ~~~~~      ~~~~          ~\n");
    printf("Press\n");
    printf("[1]     Pay your Debt in full amount\n");
    printf("[2]     Pay some of your Debt\n");
    printf("[0]     Go back to Actions Menu\n");
    printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: used to determine whether the player
entered a valid Amount of Debt to Pay
*Parameters: nAmountPayDebt, nDebt, nCash
*Return Value: int (returns 1 if user entered a valid Amount of Debt to Pay
else returns 0)
*/
int isValidAmountPayDebt(int nAmountPayDebt, int nDebt, int nCash)
{
    if (nCash >= nAmountPayDebt && nAmountPayDebt <= nDebt) return 1;
    else return 0;  
}

/*Description: prints Loan Menu 
*Parameters: nLoan
*Return Value: none (displays the Loan Menu)
*/
void displayLoanMenu(int nLoan)
{
    printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("%40s", "LOAN MENU\n\n");
    printf("~~      ~    _____                 ~\n");
    printf(" ___..--\"\"      `.  ~                   ~           ~\n");
    printf("_..-'               ,'                  O\n");
    printf("                  ,'             ~~    o          ~~\n");
    printf("   (|\\          ,'   ~   ______________________________________\n");
    printf("      ________,'        (_My Boss Shark said you can Loan $%d!_)\n", nLoan);
    printf("   ,.`/`./\\/`/      _.^._ `/                                  ~\n");
    printf("  /-'            |\\/ ,, o\\   oO\n");
    printf("   `',^/\\/\\       >._``,_< oO       ~\n");
    printf("_________,'         `' `/\n");
    printf("            ~~~~     ~~~~~~           ~~~~~~~~   ~~\n");
    printf("~~~~     ~      ~~~~~~~  ~~~~~      ~~~~          ~\n");
    printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
}

/*Description: used to determine whether the player
entered a valid Amount to Loan
*Parameters: nAmountWishLoan, nLoan
*Return Value: int (returns 1 if user entered a valid Amount to Loan
else returns 0)
*/
int isValidAmountDebtLoan(int nAmountWishLoan, int nLoan)
{
    if (nLoan >= nAmountWishLoan) return 1;
    else return 0;
}

/*Description: prints Display Per City/Day
*Parameters: nDay, nCity, nCash, nDebt
*Return Value: none (displays the Display Per City/Day)
*/
void displayPerCityDay(int nDay, int nCity, int nCash, int nDebt)
{
    if (nCity == 1)
    {
        changeTextColor(3);
        printf("    __________________________________\n");
        printf("   /                                  \\\n");  
        printf("  |    ____________________________    |\n");
        printf("  |   /     Hello, Oiler!          \\   |\n");
        printf("  |   |Day %2d: Manila              |   |\n", nDay);
        printf("  |   |Cash: $ %10d          |   |\n", nCash);
        printf("  |   |Debt: $ %10d          |   |\n", nDebt);
        printf("  |   \\____________________________/   |\n");
        printf("  |  /|\\ OIL-TARI  SM124          _    |\n");
        printf("   \\__________________________________/\n");  
        printf("   _____!_________________________!______________________________________________________\n");
    }
    else if (nCity == 3)
    {
        changeTextColor(3);
        printf("    __________________________________\n");
        printf("   /                                  \\\n");  
        printf("  |    ____________________________    |\n");
        printf("  |   /     Hello, Oiler!          \\   |\n");
        printf("  |   |Day %2d: Makati              |   |\n", nDay);
        printf("  |   |Cash: $ %10d          |   |\n", nCash);
        printf("  |   |Debt: $ %10d          |   |\n", nDebt);
        printf("  |   \\____________________________/   |\n");
        printf("  |  /|\\ OIL-TARI  SM124          _    |\n");
        printf("   \\__________________________________/\n");  
        printf("   _____!_________________________!______________________________________________________\n");
    }
    else if (nCity == 4)
    {
        changeTextColor(3);
        printf("    __________________________________\n");
        printf("   /                                  \\\n");  
        printf("  |    ____________________________    |\n");
        printf("  |   /     Hello, Oiler!          \\   |\n");
        printf("  |   |Day %2d: Quezon City         |   |\n", nDay);
        printf("  |   |Cash: $ %10d          |   |\n", nCash);
        printf("  |   |Debt: $ %10d          |   |\n", nDebt);
        printf("  |   \\____________________________/   |\n");
        printf("  |  /|\\ OIL-TARI  SM124          _    |\n");
        printf("   \\__________________________________/\n");  
        printf("   _____!_________________________!______________________________________________________\n");;
    }
    else if (nCity == 2)
    {
        changeTextColor(3);
        printf("    __________________________________\n");
        printf("   /                                  \\\n");  
        printf("  |    ____________________________    |\n");
        printf("  |   /     Hello, Oiler!          \\   |\n");
        printf("  |   |Day %2d: Alabang             |   |\n", nDay);
        printf("  |   |Cash: $ %10d          |   |\n", nCash);
        printf("  |   |Debt: $ %10d          |   |\n", nDebt);
        printf("  |   \\____________________________/   |\n");
        printf("  |  /|\\ OIL-TARI  SM124          _    |\n");
        printf("   \\__________________________________/\n");  
        printf("   _____!_________________________!______________________________________________________\n");
    }
}

/*Description: prints the Essential Oils Inventory
*Parameters: nStockLemonDrops, nStockLavenderDrops, nStockRosemaryDrops, nStockMintDrops, nSellPriceLemon, 
nSellPriceLavender, nSellPriceRosemary, nSellPriceMint
*Return Value: none (displays the Essential Oils Inventory)
*/
void displayInventoryEO(int nStockLemonDrops, int nStockLavenderDrops, int nStockRosemaryDrops, int nStockMintDrops, int nSellPriceLemon, int nSellPriceLavender, int nSellPriceRosemary, int nSellPriceMint)
{
    changeTextColor(5);
    printf("   ||                                  OIL-VENTORY                                      ||\n");
    printf("   ||-----------------------------------------------------------------------------------||\n");
    printf("   ||Essential Oils    No. of Drop/s      Ave. Cost/ Drop            (-)        .--.    ||\n");
    printf("   ||Lemon            %10d              $%10d          .-'-'-. _____|==|___ ||\n", nStockLemonDrops, nSellPriceLemon);
    printf("   ||Lavender         %10d              $%10d          |-...-||=+++=|  |---|||\n", nStockLavenderDrops, nSellPriceLavender);
    printf("   ||Rosemary________ %10d   __________ $%10d ________ |;:.._|| oil |==|---|||\n", nStockRosemaryDrops, nSellPriceRosemary);
    printf("   ||Mint             %10d              $%10d          `-...-'^-----^--^---^||\n", nStockMintDrops, nSellPriceMint);
    printf("   ||-----------------------------------------------------------------------------------||\n");
}

/*Description: prints the Diffuser Oils Inventory
*Parameters: nStockCMinds, nStockEBooster, nStockCalm, 
nSellPriceBottleCMinds, nSellPriceBottleEBooster, nSellPriceBottleCalm
*Return Value: none (displays the Diffuser Oils Inventory)
*/
void displayInventoryDO(int nStockCMinds, int nStockEBooster, int nStockCalm, int nSellPriceBottleCMinds, int nSellPriceBottleEBooster, int nSellPriceBottleCalm)
{
    changeTextColor(5);
    printf("   ||-----------------------------------------------------------------------------------||\n");
    printf("   ||Diffuser Oils    No. of Bottle/s          Price/Bottle         [-]    (-)    [_]   ||\n");
    printf("   ||Clear Minds      %10d                $%10d       .-'-'-..-'-'-..-'-'-. ||\n", nStockCMinds, nSellPriceBottleCMinds);
    printf("   ||Energy Booster__ %10d   _____________$%10d ______|-...-||-...-||-...-| ||\n", nStockEBooster, nSellPriceBottleEBooster);
    printf("   ||Calming          %10d                $%10d       `-...-'`-...-'`-...-' ||\n", nStockCalm, nSellPriceBottleCalm);
    printf("   ||-----------------------------------------------------------------------------------||\n");
    printf("   ||___________________________________________________________________________________||\n");
    printf("   ||                                                                                   ||\n");
}

/*Description: prints the Tavel Menu
*Parameters: nCity
*Return Value: none (displays the Travel Menu)
*/
void displayTravelMenu(int nCity)
{
    if (nCity == 1)
    {
        printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf("%45s", "TRAVEL MENU\n\n");
        printf("                     ,-.^._                 _\n");
        printf("                   .'      `-.            ,' ;\n");
        printf("       /`-.  ,----'         `-.   _  ,-.,'  `\n");
        printf("    _.'   `--'                 `-' '-'      ;\n");
        printf("   :                         $              ;\n");    
        printf("  ,'                      Alabang        ,--'\n");
        printf("  :     $                               ;\n");
        printf(" :   Quezon    <<OIL-MAPA>>          :'' ,-------------------------------.\n");   
        printf(" ;    City                          :    |Press   City                   |\n");    
        printf("(                                  ;     |[2]     Alabang                |\n");     
        printf(" `-.                   $         ,'      |[3]     Makati                 |\n");
        printf("     `.             Makati    ;''        |[4]     Quezon City            |\n");         
        printf("    ;'              ,.__,---._'          |[0]     Go back to Actions Menu|\n");    
        printf("     `-.__ ....... _;                    `-------------------------------'\n");
        printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    }
    else if (nCity == 2)
    {
        printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf("%45s", "TRAVEL MENU\n\n");
        printf("                     ,-.^._                 _\n");
        printf("                   .'      `-.            ,' ;\n");
        printf("       /`-.  ,----'         `-.   _  ,-.,'  `\n");
        printf("    _.'   `--'                 `-' '-'      ;\n");
        printf("   :             $                          ;\n");    
        printf("  ,'           Manila                    ,--'\n");
        printf("  :     $                               ;\n");
        printf(" :   Quezon    <<OIL-MAPA>>          :'' ,-------------------------------.\n");   
        printf(" ;    City                          :    |Press   City                   |\n");    
        printf("(                                  ;     |[1]     Manila                 |\n");     
        printf(" `-.                   $         ,'      |[3]     Makati                 |\n");
        printf("     `.             Makati    ;''        |[4]     Quezon City            |\n");         
        printf("    ;'              ,.__,---._'          |[0]     Go back to Actions Menu|\n");    
        printf("     `-.__ ....... _;                    `-------------------------------'\n");
        printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    }
    else if (nCity == 3)
    {
        printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf("%45s", "TRAVEL MENU\n\n");
        printf("                     ,-.^._                 _\n");
        printf("                   .'      `-.            ,' ;\n");
        printf("       /`-.  ,----'         `-.   _  ,-.,'  `\n");
        printf("    _.'   `--'                 `-' '-'      ;\n");
        printf("   :             $           $              ;\n");    
        printf("  ,'           Manila     Alabang        ,--'\n");
        printf("  :     $                               ;\n");
        printf(" :   Quezon    <<OIL-MAPA>>          :'' ,-------------------------------.\n");   
        printf(" ;    City                          :    |Press   City                   |\n");    
        printf("(                                  ;     |[1]     Manila                 |\n");     
        printf(" `-.                             ,'      |[2]     Alabang                |\n");
        printf("     `.                       ;''        |[4]     Quezon City            |\n");         
        printf("    ;'              ,.__,---._'          |[0]     Go back to Actions Menu|\n");    
        printf("     `-.__ ....... _;                    `-------------------------------'\n");
        printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    }
    else if (nCity == 4)
    {
        printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf("%45s", "TRAVEL MENU\n\n");
        printf("                     ,-.^._                 _\n");
        printf("                   .'      `-.            ,' ;\n");
        printf("       /`-.  ,----'         `-.   _  ,-.,'  `\n");
        printf("    _.'   `--'                 `-' '-'      ;\n");
        printf("   :             $           $              ;\n");    
        printf("  ,'           Manila     Alabang        ,--'\n");
        printf("  :                                     ;\n");
        printf(" :             <<OIL-MAPA>>          :'' ,-------------------------------.\n");   
        printf(" ;                                  :    |Press   City                   |\n");    
        printf("(                                  ;     |[1]     Manila                 |\n");     
        printf(" `-.                   $         ,'      |[2]     Alabang                |\n");
        printf("     `.             Makati    ;''        |[3]     Makati                 |\n");         
        printf("    ;'              ,.__,---._'          |[0]     Go back to Actions Menu|\n");    
        printf("     `-.__ ....... _;                    `-------------------------------'\n");
        printf("%s", "\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    }
}

/*Description: used to determine whether the player
entered a valid Travel Menu choice
*Parameters: nCity
*Return Value: int (returns 1 if user entered a valid Travel Menu choice
else returns 0)
*/
int isValidChoiceTravelMenu(int nCity, int nChoiceTravelMenu)
{
    if (nCity == 1) 
    {
        if(nChoiceTravelMenu == 2 || nChoiceTravelMenu == 3 || nChoiceTravelMenu == 4) return 1;
        else return 0;
    }
    else if (nCity == 2) 
    {
        if(nChoiceTravelMenu == 1 || nChoiceTravelMenu == 3 || nChoiceTravelMenu == 4) return 1;
        else return 0;
    }
    else if (nCity == 3) 
    {
        if(nChoiceTravelMenu == 1 || nChoiceTravelMenu == 2 || nChoiceTravelMenu == 4) return 1;
        else return 0;
    }
    else if (nCity == 4) 
    {
        if(nChoiceTravelMenu == 1 || nChoiceTravelMenu == 2 || nChoiceTravelMenu == 3) return 1;
        else return 0;
    }
}

/*Description: prints the Oil-elf who gives the player EO freebies
*Parameters: none
*Return Value: none (displays the Oil-elf who gives the player EO freebies)
*/
void displayFreebieEO()
{
    changeTextColor(2);
    printf("                ___,@     __________________________________________\n");
    printf("               /  <      |Congrats, Oiler! I'm the Oil-elf and as my|\n");
    printf("          ,_  /    \\  _, |  gift, you get one free bottle of Lemon, |\n");
    printf("      ?    \\`/______\\`/  |  Lavender, Rosemary, & Mint...Enjoy <3!!!|\n");
    printf("   ,_(_).  |; (a  a) ;|  \\/''''''''''''''''''''''''''''''''''''''''''\n");
    printf("    \\___ \\ \\/\\   7  /\\/    _\\8/_\n");
    printf("        \\/\\   \\'=='/      | /| /|\n");
    printf("         \\ \\___)--(_______|//|//|\n");
    printf("          \\___  ()  _____/|/_|/_|\n");
    printf("             /  ()  \\    `----'\n");
    printf("            /   ()   \\\n");
    printf("           '-.______.-'\n");
    printf("         _    |_||_|    _\n");
    printf("        (@____) || (____@)\n");
    printf("         \\______||______/\n");
}

/*Description: prints the Teddy-oil who gives the player DO freebies
*Parameters: none
*Return Value: none (displays the Teddy-oil who gives the player DO freebies)
*/
void displayFreebieDO()
{
    changeTextColor(4);
    printf("                       _____________________________________\n");
    printf("        __..._.-.     | Congrats, Oiler! I'm Teddy-oil and  |\n");
    printf("       /.-.   '-.)    |as my gift, I give to you, for free, |\n"); 
    printf("       \\',       \\    |   2 bottles each of Clear Minds,    |\n");
    printf("        |       o'--D | Energy Booster, & Calming...Enjoy!!!|\n");
    printf("        \\      /    |  \\/''''''''''''''''''''''''''''''''''''\n");
    printf("         ;._  _\\ '-/\n");
    printf("      .'    __ `\\`.-\"-. .-\"-.\n");
    printf("    .'    .'  '.|'     '     ',\n");
    printf("   /      \\     '._, Diffuser |\n");
    printf("  ;        '-._     \\  Oils   /\n");
    printf("(|           /'-.__/       .'\n");
    printf("  \\  __     ,'     '-.   .-'\n");
    printf("    `/  `\\.-'|         '.'\n");
    printf("     |    |  '-.\n");
    printf("     |    '-.   )\n");
    printf("     \\       )-'\n");
    printf("      '-----'\n");
}

/*Description: prints the Game Summary
*Parameters: nCash, nDebt, nStockLemonDrops, nStockLavenderDrops, nStockRosemaryDrops, 
nStockMintDrops, nStockCMinds, nStockEBooster, nStockCalm
*Return Value: none (displays the Game Summary)
*/
void displayGameSummary(int nCash, int nDebt, int nStockLemonDrops, int nStockLavenderDrops, int nStockRosemaryDrops, int nStockMintDrops, int nStockCMinds, int nStockEBooster, int nStockCalm)
{
    changeTextColor(6);
    printf("\t\t\t\t\t                 _-===-_____-========-___-===-_____-========-___________-========-___-===-_____-========-___________-========-_____\n");      
    printf("\t\t\t\t\t               _(                                               _____________________                                            __)\n");
    printf("\t\t\t\t\t              (_                                               |  _________________  |                                          _)\n");
    printf("\t\t\t\t\t               (_                                              | |   GAME SUMMARY  | |                                         _)\n");
    printf("\t\t\t\t\t                (_         _________________________________   | |Cash:$ %10d| |   _________________________________      )_\n", nCash);
    printf("\t\t\t\t\t                _(        [_________________________________]  | |Debt:$ %10d| |  [_________________________________]       )_\n", nDebt);
    printf("\t\t\t\t\t              _(         .-'                                '-.| |_________________| |.-'                                '-.      _)\n");
    printf("\t\t\t\t\t             (_         /            DIFFUSER OILS             |  ___ ___ ___   ___  |            ESSENTIAL OILS            \\     )_\n");
    printf("\t\t\t\t\t              (_       /|||||||||||||||||||||||||||||||||||||||| | 7 | 8 | 9 | | + | ||||||||||||||||||||||||||||||||||||||||\\     _)\n");
    printf("\t\t\t\t\t              _(       |                   No. of Bottle/s     | |___|___|___| |___| |                No. of Drop/s          |    _)\n");
    printf("\t\t\t\t\t            _(         |                                       | | 4 | 5 | 6 | | - | |                                       |   _)\n");
    printf("\t\t\t\t\t           (_          |Clear Minds        %10d          | |___|___|___| |___| |Lemon           %10d             |  _)\n", nStockCMinds, nStockLemonDrops);
    printf("\t\t\t\t\t            (_         |Energy Booster     %10d          | | 1 | 2 | 3 | | x | |Lavender        %10d             |  )_\n", nStockEBooster, nStockLavenderDrops);
    printf("\t\t\t\t\t              (_       |Calming            %10d          | |___|___|___| |___| |Rosemary        %10d             |    )_\n", nStockCalm, nStockRosemaryDrops);
    printf("\t\t\t\t\t              _(       |  _    _    _    _    _    _    _    _ | | . | 0 | = | | / | |Mint            %10d             |     _)\n", nStockMintDrops);                 
    printf("\t\t\t\t\t             (_        |,' `-.' ` ,' ` ,' ` ,' ` ,' ` ,' ` ,' `| |___|___|___| |___| |,''`-.''` ,''` ,''` ,''` ,''` ,''` ,''`|    __)\n");
    printf("\t\t\t\t\t               (_      '---------------------------------------|_____________________|---------------------------------------'   _)\n");
    printf("\t\t\t\t\t                (____________                                                                                            ________)\n");
    printf("\t\t\t\t\t                            (_                                                                                          _)\n");
    printf("\t\t\t\t\t                              '=-___-===-_____-========-___________-========-___-===-_____-========-___________-========-'Oo\n");
    printf("\t\t\t\t\t                                       _________                                                                           o.\n");
    printf("\t\t\t\t\t                            _____     |         |    ____________               _____      ___________                ______ .\n");  
    printf("\t\t\t\t\t                         __||___||__  |_________|   |     OIL    | ________  __||___||__  |    OIL    |  ___________  ||__||_()_\n");         
    printf("\t\t\t\t\t                        |_         _| |_00______Y_  |   EXPRESS  | |      | |_         _| |  EXPRESS  | |           | |2021 FJOG)\n");
    printf("\t\t\t\t\t                        B=\"OO-------OO\"=\"OO-------OO\"=\"OO--------OO\"=\"OO--OO\"=\"OO-------OO\"=\"OO-------OO\"=\"OO-------OO\"=\"\"OO----OO-\\\n");
}

/*Description: prints the Exit Message
*Parameters: none
*Return Value: none (displays the Exit Message)
*/
void displayExitMessage()
{
    printf("\t\t\t\t\t\t\t\t  *                    *     .--.                                              *\n");
    printf("\t\t\t\t\t\t\t\t     *                      / /  `                      *   *       *          + *   *       *          +\n");
    printf("\t\t\t\t\t\t\t\t  *        +               | |                       *\n");
    printf("\t\t\t\t\t\t\t\t                  '         \\ \\__,                          *   *       *          + *   *       *          +\n");
    printf("\t\t\t\t\t\t\t\t*             *          +   '--'  *    *                 *       *          + *   *       *          +\n");
    printf("\t\t\t\t\t\t\t\t                  +   *                    *                                                         *\n");
    printf("\t\t\t\t\t\t\t\t     +                 *   *       *          +                              *   *       *          +\n");
    printf("\t\t\t\t\t\t\t\t                 c==o\n");
    printf("\t\t\t\t\t\t\t\t *             _/____\\_            +    *              *                                        * *   *       *\n");            
    printf("\t\t\t\t\t\t\t\t        _.,--'\" ||^ || \"`z._            *   *       *                                   +\n");
    printf("\t\t\t\t\t\t\t\t *     /_/^ ___\\||  || _/o\\ \"`-._          +       *       +       *   *       *\n");          
    printf("\t\t\t\t\t\t\t\t     _/  ]. L_| || .||  \\_/_  . _`--._ *   *       *                                    + *   *       *          +\n");
    printf("\t\t\t\t\t\t\t\t    /_~7  _ . \" ||. || /] \\ ]. (_)  . \"`--.     *              + *   *       *          +\n");
    printf("\t\t\t\t\t\t\t\t   |__7~.(_)_ []|+--+|/____T_____________L|\n");
    printf("\t\t\t\t\t\t\t\t   |__|  _^(_) /^   __\\____ _   _|            +                                            *         *     *\n");
    printf("\t\t\t\t\t\t\t\t   |__| (_){_) F ]P{__ L___ _   _]    *   *       *                      + *   *       *          +\n");
    printf("\t\t\t\t\t\t\t\t * |__| . _(_) \\v     /__________|________\n");
    printf("\t\t\t\t\t\t\t\t   l__l_ (_). []|+-+-<\\^   L  . _   - ---L| *   *         *       *          +            * *                +\n");
    printf("\t\t\t\t\t\t\t\t    \\__\\    __. ||^l  \\Y] /_]  (_) .  _,--'\n");
    printf("\t\t\t\t\t\t\t\t  *   \\~_]  L_| || .\\ .\\/~.    _,--'\"  *   *       *          + *   *       *          +\n");
    printf("\t\t\t\t\t\t\t\t       \\_\\ . __/||  |\\  \\`-+-<'\"  *   *       *          +\n");
    printf("\t\t\t\t\t\t\t\t    *    \"`---._|F__P|X o~~|[\\      *   *               *   *       *  *   *       *  *   *       *  *   *       *\n");  
    printf("\t\t\t\t\t\t\t\t *              \\____/ \\___|[//           *           *           *            *         *       *       *\n");    
    printf("\t\t\t\t\t\t\t\t                 `--'   `--+-'           *   *       *           *   *       *           *   *          *  *   *\n");
    printf("\t\t\t\t\t\t\t\t      *       +t              +          o                  *                          m              *o   m\n");
    printf("\t\t\t\t\t\t\t\t                                      Thank you, Oil-bularyo. See you soon! :)))\n\n");
}

/*Description: updates Scores.txt if Player enters the Leader Board
*Parameters: nCash
*Return Value: none (If Player enters the Leader Board, they will be 
prompted to enter their name and Scores.txt will be updated. Else, Scores.txt will
not be updated.)
*/
void updateLeaderBoard(int nCash)
{
    FILE *fScores;
    FILE *fNewScores;
    int n10, nTop1, nTop2, nTop3, nTop4, nTop5, nTop6, nTop7, nTop8, nTop9, nTop10;
    int nRank1, nRank2, nRank3, nRank4, nRank5, nRank6, nRank7, nRank8, nRank9, nRank10;
    char cHall[50], cOf[50], cOil[50], cScore2[50], cDollarSign[50], cRank[50], cNames[50];
    char cName1[100], cName2[100], cName3[100], cName4[100], cName5[100];
    char cName6[100], cName7[100], cName8[100], cName9[100], cName10[100];
    char cScore[50], cNameNew[100];
    char cPlayerName[100], cTemp[100];

    fScores = fopen("Scores.txt", "r");
    fscanf(fScores, "%s%s%s", cHall, cOf, cOil);
    fscanf(fScores, "%s%s%s", cRank, cNames, cScore2);
    fscanf(fScores, "%d%s%s%d", &nRank1, cName1, cDollarSign, &nTop1);
    fscanf(fScores, "%d%s%s%d", &nRank2, cName2, cDollarSign, &nTop2);
    fscanf(fScores, "%d%s%s%d", &nRank3, cName3, cDollarSign, &nTop3);
    fscanf(fScores, "%d%s%s%d", &nRank4, cName4, cDollarSign, &nTop4);
    fscanf(fScores, "%d%s%s%d", &nRank5, cName5, cDollarSign, &nTop5);
    fscanf(fScores, "%d%s%s%d", &nRank6, cName6, cDollarSign, &nTop6);
    fscanf(fScores, "%d%s%s%d", &nRank7, cName7, cDollarSign, &nTop7);
    fscanf(fScores, "%d%s%s%d", &nRank8, cName8, cDollarSign, &nTop8);
    fscanf(fScores, "%d%s%s%d", &nRank9, cName9, cDollarSign, &nTop9);
    fscanf(fScores, "%d%s%s%d", &nRank10, cName10, cDollarSign, &nTop10);
    fclose(fScores);
    if(nCash > nTop1)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cPlayerName, cDollarSign, nCash);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cName9, cDollarSign, nTop9);
        fclose(fScores);
    }
    else if (nCash > nTop2)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cPlayerName, cDollarSign, nCash);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cName9, cDollarSign, nTop9);
        fclose(fScores);
    }
    else if (nCash > nTop3)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cPlayerName, cDollarSign, nCash);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cName9, cDollarSign, nTop9);
        fclose(fScores);
    }
    else if (nCash > nTop4)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cPlayerName, cDollarSign, nCash);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cName9, cDollarSign, nTop9);
        fclose(fScores);
    }
    else if (nCash > nTop5)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cPlayerName, cDollarSign, nCash);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cName9, cDollarSign, nTop9);
        fclose(fScores);
    }
    else if (nCash > nTop6)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cPlayerName, cDollarSign, nCash);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cName9, cDollarSign, nTop9);
        fclose(fScores);
    }
    else if (nCash > nTop7)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cPlayerName, cDollarSign, nCash);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cName9, cDollarSign, nTop9);
        fclose(fScores);
    }
    else if (nCash > nTop8)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cPlayerName, cDollarSign, nCash);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cName9, cDollarSign, nTop9);
        fclose(fScores);
    }
    else if (nCash > nTop9)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cPlayerName, cDollarSign, nCash);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cName9, cDollarSign, nTop9);
        fclose(fScores);
    }
    else if (nCash > nTop10)
    {
        printf("\nCongratulations, Oil-bularyo!!! You're now one of the Top 10 Greatest Oil-bularyos!");
        printf("\nEnter your name: ");
        scanf("%s", cPlayerName);
        fScores = fopen("Scores.txt", "w");
        fprintf(fScores, "\t\t\t%s %s %s\n", cHall, cOf, cOil);
        fprintf(fScores, "\t%s\t\t%s\t\t%s\n", cRank, cNames, cScore2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank1, cName1, cDollarSign, nTop1);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank2, cName2, cDollarSign, nTop2);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank3, cName3, cDollarSign, nTop3);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank4, cName4, cDollarSign, nTop4);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank5, cName5, cDollarSign, nTop5);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank6, cName6, cDollarSign, nTop6);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank7, cName7, cDollarSign, nTop7);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank8, cName8, cDollarSign, nTop8);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank9, cName9, cDollarSign, nTop9);
        fprintf(fScores, "\t%2d\t\t%s\t\t%s %d\n", nRank10, cPlayerName, cDollarSign, nCash);
        fclose(fScores);
    }
}

int main()
{   
    int nChoiceMainMenu, nChoiceBuyMenu, nChoiceBuyMenuEO, nNoOfBottlesEO, nPriceBuyEO, nBuyEONoBottle, nBuyEOPrice, nChoiceBuyEO;
    int nChoiceSellMenu, nChoiceSellEOMenu, nSellEONoDrops, nSellEOPrice, nChoiceSellEO;
    int nChoiceSellDOMenu, nSellDONoBottle, nChoiceConfirmSellDO;
    int nChoiceMakeDOMenu, nChoiceConfirmMakeDO;
    int nChoicePayDebtMenu, nAmountPayDebt, nAmountWishLoan;
    int nChoiceTravelMenu;
    int nDay = 1, nCash = 1500, nLoan = 10000, nDebt = 4000, nCity = 1;
    char cChoiceActionsMenu, cChoiceEOOrderForm;

    int nLowerLemon = 100, nUpperLemon = 150, nCountLemon = 1;
    int nLowerLavender = 20, nUpperLavender = 60, nCountLavender = 1;
    int nLowerRosemary = 70, nUpperRosemary = 100, nCountRosemary = 1;
    int nLowerMint = 130, nUpperMint = 200, nCountMint = 1;

    int nLowerNoBottle = 1, nUpperNoBottle = 10, nCountNoBottle = 1;

    int nNoBottleLemon, nNoBottleLavender, nNoBottleRosemary, nNoBottleMint;
    int nPriceBottleLemon, nPriceBottleLavender, nPriceBottleRosemary, nPriceBottleMint;

    int nStockLemonDrops = 0, nStockLavenderDrops = 0, nStockRosemaryDrops = 0, nStockMintDrops = 0;
    int nSellPriceLemon, nSellPriceLavender, nSellPriceRosemary, nSellPriceMint;
    int nSellPriceLemonPrev, nSellPriceLavenderPrev, nSellPriceRosemaryPrev, nSellPriceMintPrev; 

    int nStockCMinds = 0, nStockEBooster = 0, nStockCalm = 0, nSellPriceBottleCMinds, nSellPriceBottleEBooster, nSellPriceBottleCalm;
    int nNoBottleCMinds, nNoBottleEBooster, nNoBottleCalm;
    int nNoBottleMakeDO, nCityCharge;

    FILE *fScores;
    FILE *fNewScores;
    int nMaxCharInFile;
    char cName[200];

    srand(time(0));
    nPriceBottleLemon = getPricePerBottleEOStep2(nLowerLemon, nUpperLemon, nCountLemon);
    nPriceBottleLavender = getPricePerBottleEOStep2(nLowerLavender, nUpperLavender, nCountLavender);
    nPriceBottleRosemary = getPricePerBottleEOStep2(nLowerRosemary, nUpperRosemary, nCountRosemary);
    nPriceBottleMint = getPricePerBottleEOStep2(nLowerMint, nUpperMint, nCountMint);

    srand(time(0));
    nNoBottleLemon = getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);
    nNoBottleLavender =  getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);
    nNoBottleRosemary = getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);
    nNoBottleMint = getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);

    nSellPriceLemon = nPriceBottleLemon / 10;
    nSellPriceLavender = nPriceBottleLavender / 10;
    nSellPriceRosemary = nPriceBottleRosemary / 10;
    nSellPriceMint = nPriceBottleMint / 10;

    nSellPriceLemonPrev = nSellPriceLemon; 
    nSellPriceLavenderPrev = nSellPriceLavender;
    nSellPriceRosemaryPrev = nSellPriceRosemary;
    nSellPriceMintPrev = nSellPriceMint;

    nCityCharge = getCityCharge(nCity);

    displayGameTitle();//game title
    displayMainMenu();//main menu
    changeTextColor(15);
    printf("Enter Choice: ");
    scanf("%d", &nChoiceMainMenu);
    system("cls");
    while (nChoiceMainMenu != 0)
    {
        if (nChoiceMainMenu == 1) //sales trip
        {
            displayFreebieEO();
            nStockLemonDrops = 10; nStockLavenderDrops = 10; nStockRosemaryDrops = 10; nStockMintDrops = 10;
            while (nDay <= 6 && (cChoiceActionsMenu = getchar()) == '\n')
            {   
                nNoBottleCMinds = getMaxNoBottleCMinds(nStockLemonDrops, nStockRosemaryDrops, nStockMintDrops); //get max bottle of DO that can be made based on Stock on Hand
                nNoBottleEBooster = getMaxNoBottleEBooster(nStockLemonDrops, nStockRosemaryDrops, nStockMintDrops);
                nNoBottleCalm = getMaxNoBottleCalm(nStockLemonDrops, nStockLavenderDrops, nStockRosemaryDrops);

                nSellPriceBottleCMinds = getSellPriceBottleCMinds(nSellPriceLemon, nSellPriceRosemary, nSellPriceMint); //get sell price of DO based on current price EO
                nSellPriceBottleEBooster = getSellPriceBottleEBooster(nSellPriceLemon, nSellPriceRosemary, nSellPriceMint); 
                nSellPriceBottleCalm = getSellPriceBottleCalm(nSellPriceLemon, nSellPriceLavender, nSellPriceRosemary);

                sellPriceChecker(&nSellPriceLemon, &nSellPriceLavender, &nSellPriceRosemary, &nSellPriceMint); //just in case price generated is negative

                displayPerCityDay(nDay, nCity, nCash, nDebt);//display Per City/Day
                displayInventoryEO(nStockLemonDrops, nStockLavenderDrops, nStockRosemaryDrops, nStockMintDrops, nSellPriceLemon, nSellPriceLavender, nSellPriceRosemary, nSellPriceMint);//stock on hand
                displayInventoryDO(nStockCMinds, nStockEBooster, nStockCalm, nSellPriceBottleCMinds, nSellPriceBottleEBooster, nSellPriceBottleCalm);//stock on hand
                displayActionsMenu();//actions menu
                printf("Enter Choice: ");
                cChoiceActionsMenu = getchar();

                if (cChoiceActionsMenu == 'A' || cChoiceActionsMenu == 'a')// Buy
                {
                    displayBuyMenu();//buymenu
                    printf("Enter Choice: ");
                    scanf("%d", &nChoiceBuyMenu);//EO?back to actions menu?
                    if (nChoiceBuyMenu == 1)// buy EO-->per bottle
                    {
                        bottlePriceChecker(&nPriceBottleLemon, &nNoBottleLemon, &nPriceBottleLavender, &nNoBottleLavender, &nPriceBottleRosemary, &nNoBottleRosemary, &nPriceBottleMint, &nNoBottleMint);
                        //just in case price generated is negative
                        displayMenuBuyEO(nPriceBottleLemon, nPriceBottleLavender, nPriceBottleRosemary, nPriceBottleMint, nNoBottleLemon, nNoBottleLavender, nNoBottleRosemary, nNoBottleMint);//buyEOmenu
                        printf("Enter choice: ");
                        scanf("%d", &nChoiceBuyMenuEO);//type of EO?
                        if(nChoiceBuyMenuEO == 1)//lemon
                        {
                            printf("Enter no. of bottles you wish to buy: ");
                            scanf("%d", &nBuyEONoBottle);//no of bottles?
                            if (nBuyEONoBottle <= nNoBottleLemon)
                            {
                                nBuyEOPrice = nBuyEONoBottle * nPriceBottleLemon;//totalprice of EO you want to buy
                                printf("Total Price = %d\n\n", nBuyEOPrice);
                                displayBuyEO();//buy EO confirmation
                                printf("Enter Choice: ");
                                scanf("%d", &nChoiceBuyEO);//buy?go back to actions menu?
                                if(nChoiceBuyEO == 1 && isBuyEOValid(nCash, nBuyEOPrice))
                                {
                                    nCash -= nBuyEOPrice;//updates displayPerCityDay(...);
                                    nSellPriceLemon = nSellPriceLemonPrev * nStockLemonDrops + (nSellPriceLemon * (nBuyEONoBottle * 10)) ;  //modify sell price per drop when adding EO in stock
                                    //check this
                                    nStockLemonDrops += nBuyEONoBottle * 10;//updates displayInventoryEO(...);
                                    nSellPriceLemon /= nStockLemonDrops;//modify sell price per drop when adding EO in stock
                                    nNoBottleLemon -= nBuyEONoBottle; //updates displayMenuBuyEO();
                                    nSellPriceLemonPrev = nSellPriceLemon;// w/o this the nSellPriceLemonPrev would be the same as the nSellPriceLemonPrev when player entered a city
                                }
                                else if(nChoiceBuyEO == 0)//back to actions menu
                                {
                                    switch(nChoiceBuyEO)
                                    {
                                        case 0: break;//valid input-->back to actions menu
                                        default: printf("Oopsie. Invalid input :(\n"); break;//input!=1,2,3,4,0-->back to actions menu
                                    }
                                }
                                else//back to actions menu
                                {
                                    switch(isBuyEOValid(nCash, nBuyEOPrice))
                                    {
                                        case 0: printf("Oopsie. You don't have enough Cash :(\n"); break;//invalid nChoiceBuyEO
                                        default: printf("Oopsie. Invalid input :(\n"); break;//invalid nChoiceBuyEO
                                    }
                                }
                            }
                            else
                            {
                                switch(nChoiceBuyMenu)
                                {
                                case 1: printf("Oopsie. Invalid No. of Bottles :(\n");break;
                                default: printf("Oopsie. Invalid No. of Bottles :(\n"); break;
                                }
                            }                                                        
                        }
                        else if(nChoiceBuyMenuEO == 2)//lavender
                        {
                            printf("Enter no. of bottles you wish to buy: ");
                            scanf("%d", &nBuyEONoBottle);//no of bottles?
                            if (nBuyEONoBottle <= nNoBottleLavender)
                            {
                                nBuyEOPrice = nBuyEONoBottle * nPriceBottleLavender;
                                printf("Total Price = %d\n\n", nBuyEOPrice);
                                displayBuyEO();//buy EO confirmation
                                printf("Enter Choice: ");
                                scanf("%d", &nChoiceBuyEO);//buy?go back to actions menu?
                                if(nChoiceBuyEO == 1 && isBuyEOValid(nCash, nBuyEOPrice))
                                {
                                    nCash -= nBuyEOPrice;//updates displayPerCityDay(...);
                                    nSellPriceLavender = nSellPriceLavenderPrev * nStockLavenderDrops + (nSellPriceLavender * (nBuyEONoBottle * 10)) ;  //modify sell price per drop when adding EO in stock
                                    nStockLavenderDrops += nBuyEONoBottle * 10;//updates displayInventoryEO(...);
                                    nSellPriceLavender /= nStockLavenderDrops;//modify sell price per drop when adding EO in stock
                                    nNoBottleLavender -= nBuyEONoBottle; //updates displayMenuBuyEO();
                                    nSellPriceLavenderPrev = nSellPriceLavender;// w/o this the nSellPriceLemonPrev would be the same as the nSellPriceLemonPrev when player entered a city
                                }
                                else if(nChoiceBuyEO == 0)//back to actions menu
                                {
                                    switch(nChoiceBuyEO)
                                    {
                                        case 0: break;//valid input-->back to actions menu
                                        default: printf("Oopsie. Invalid input :(\n"); break;//input!=1,2,3,4,0-->back to actions menu
                                    }
                                }
                                else//back to actions menu
                                {
                                    switch(isBuyEOValid(nCash, nBuyEOPrice))
                                    {
                                        case 0: printf("Oopsie. You don't have enough Cash :(\n"); break;//invalid nChoiceBuyEO
                                        default: printf("Oopsie. Invalid input :(\n"); break;//invalid nChoiceBuyEO
                                    }
                                }
                            }
                            else
                            {
                                switch(nChoiceBuyMenu)
                                {
                                case 1: printf("Oopsie. Invalid No. of Bottles :(\n");break;
                                default: printf("Oopsie. Invalid No. of Bottles :(\n"); break;
                                }
                            }
                        }
                        else if(nChoiceBuyMenuEO == 3)//rosemary
                        {
                            printf("Enter no. of bottles you wish to buy: ");
                            scanf("%d", &nBuyEONoBottle);//no of bottles?
                            if (nBuyEONoBottle <= nNoBottleRosemary)
                            {
                                nBuyEOPrice = nBuyEONoBottle * nPriceBottleRosemary;
                                printf("Total Price = %d\n\n", nBuyEOPrice);
                                displayBuyEO();//buy EO confirmation
                                printf("Enter Choice: ");
                                scanf("%d", &nChoiceBuyEO);//buy?go back to actions menu?
                                if(nChoiceBuyEO == 1 && isBuyEOValid(nCash, nBuyEOPrice))
                                {
                                    nCash -= nBuyEOPrice;//updates displayPerCityDay(...);
                                    nSellPriceRosemary = nSellPriceRosemaryPrev * nStockRosemaryDrops + (nSellPriceRosemary * (nBuyEONoBottle * 10)) ;  //modify sell price per drop when adding EO in stock
                                    nStockRosemaryDrops += nBuyEONoBottle * 10;//updates displayInventoryEO(...);
                                    nSellPriceRosemary /= nStockRosemaryDrops;//modify sell price per drop when adding EO in stock
                                    nNoBottleRosemary -= nBuyEONoBottle; //updates displayMenuBuyEO();
                                    nSellPriceRosemaryPrev = nSellPriceRosemary;// w/o this the nSellPriceLemonPrev would be the same as the nSellPriceLemonPrev when player entered a city
                                }
                                else if(nChoiceBuyEO == 0)//back to actions menu
                                {
                                    switch(nChoiceBuyEO)
                                    {
                                        case 0: break;//valid input-->back to actions menu
                                        default: printf("Oopsie. Invalid input :(\n"); break;//input!=1,2,3,4,0-->back to actions menu
                                    }
                                }
                                else//back to actions menu
                                {
                                    switch(isBuyEOValid(nCash, nBuyEOPrice))
                                    {
                                        case 0: printf("Oopsie. You don't have enough Cash :(\n"); break;//invalid nChoiceBuyEO
                                        default: printf("Oopsie. Invalid input :(\n"); break;//invalid nChoiceBuyEO
                                    }
                                }
                            }
                            else
                            {
                                switch(nChoiceBuyMenu)
                                {
                                case 1: printf("Oopsie. Invalid No. of Bottles :(\n");break;
                                default: printf("Oopsie. Invalid No. of Bottles :(\n"); break;
                                }
                            }
                        }
                        else if(nChoiceBuyMenuEO == 4)//mint
                        {
                            printf("Enter no. of bottles you wish to buy: ");
                            scanf("%d", &nBuyEONoBottle);//no of bottles?
                            if (nBuyEONoBottle <= nNoBottleMint)
                            {
                                nBuyEOPrice = nBuyEONoBottle * nPriceBottleMint;
                                printf("Total Price = %d\n\n", nBuyEOPrice);
                                displayBuyEO();//buy EO confirmation
                                printf("Enter Choice: ");
                                scanf("%d", &nChoiceBuyEO);//buy?go back to actions menu?
                                if(nChoiceBuyEO == 1 && isBuyEOValid(nCash, nBuyEOPrice))
                                {
                                    nCash -= nBuyEOPrice;//updates displayPerCityDay(...);
                                    nSellPriceMint = nSellPriceMintPrev * nStockMintDrops + (nSellPriceMint * (nBuyEONoBottle * 10)) ;  //modify sell price per drop when adding EO in stock
                                    nStockMintDrops += nBuyEONoBottle * 10;//updates displayInventoryEO(...);
                                    nSellPriceMint /= nStockMintDrops;//modify sell price per drop when adding EO in stock
                                    nNoBottleMint -= nBuyEONoBottle; //updates displayMenuBuyEO();
                                    nSellPriceMintPrev = nSellPriceMint;// w/o this the nSellPriceLemonPrev would be the same as the nSellPriceLemonPrev when player entered a city
                                }
                                else if(nChoiceBuyEO == 0)//back to actions menu
                                {
                                    switch(nChoiceBuyEO)
                                    {
                                        case 0: break;//valid input-->back to actions menu
                                        default: printf("Oopsie. Invalid input :(\n"); break;//input!=1,2,3,4,0-->back to actions menu
                                    }
                                }
                                else//back to actions menu
                                {
                                    switch(isBuyEOValid(nCash, nBuyEOPrice))
                                    {
                                        case 0: printf("Oopsie. You don't have enough Cash :(\n"); break;//invalid nChoiceBuyEO
                                        default: printf("Oopsie. Invalid input :(\n"); break;//invalid nChoiceBuyEO
                                    }
                                }
                            }
                            else
                            {
                                switch(nChoiceBuyMenu)
                                {
                                case 1: printf("Oopsie. Invalid No. of Bottles :(\n");break;
                                default: printf("Oopsie. Invalid No. of Bottles :(\n"); break;
                                }
                            }
                        }
                        else//back to actions menu
                        {
                            switch(nChoiceBuyMenuEO)
                            {
                                case 0: break;//valid input-->back to actions menu
                                default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                            }
                        }
                    }
                    else//back to actions menu
                    {
                        switch(nChoiceBuyMenu)
                        {
                            case 0: break;//valid input-->back to actions menu
                            default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                        }
                    }
                }
                else if (cChoiceActionsMenu == 'B' || cChoiceActionsMenu == 'b')// Sell-->EO(per drop)--->DO(per bottle)
                {
                    displaySellMenu();//sell menu
                    printf("Enter choice: ");
                    scanf("%d", &nChoiceSellMenu);//sell EO?DO?back to actions menu?
                    if(nChoiceSellMenu == 1)//sell EO
                    {
                        displaySellEOMenu();//sell EO menu
                        printf("Enter Choice: ");
                        scanf("%d", &nChoiceSellEOMenu);//lemon?lavender?rosemary?mint?back to actions menu?
                        if(nChoiceSellEOMenu == 1)//lemon
                        {
                            printf("Enter no. of drops you wish to Sell: ");
                            scanf("%d", &nSellEONoDrops);//no of drops?
                            if(nSellEONoDrops <= nStockLemonDrops)
                            {
                                nSellEOPrice = nSellEONoDrops * nSellPriceLemon;
                                printf("Total Sell Price = %d\n", nSellEOPrice);
                                displaySellEO();//selling verification
                                printf("Enter choice: ");
                                scanf("%d", &nChoiceSellEO);//sell?back to actions menu?
                                if(nChoiceSellEO == 1)
                                {
                                    nCash += nSellEOPrice;
                                    nStockLemonDrops -= nSellEONoDrops;
                                }
                                else//back to actions menu
                                {
                                    switch(nChoiceSellEO)
                                    {
                                        case 0: break;//valid-->back to actions menu
                                        default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                                    }
                                }
                            }
                            else//back to actions menu 
                            {
                                switch(nChoiceSellEOMenu)
                                {
                                    case 1: printf("Oopsie. Not enough stock :(\n"); break;//not enough stock-->back to actions menu
                                    default: printf("Oopsie. Not enough stock :(\n"); break;//not enough stock-->back to actions menu
                                }
                            }
                        }
                        else if(nChoiceSellEOMenu == 2)//lavender
                        {
                            printf("Enter no. of drops you wish to Sell: ");
                            scanf("%d", &nSellEONoDrops);//no of drops?
                            if(nSellEONoDrops <= nStockLavenderDrops)
                            {
                                nSellEOPrice = nSellEONoDrops * nSellPriceLavender;
                                printf("Total Sell Price = %d\n", nSellEOPrice);
                                displaySellEO();//selling verification
                                printf("Enter choice: ");
                                scanf("%d", &nChoiceSellEO);//sell?back to actions menu?
                                if(nChoiceSellEO == 1)
                                {
                                    nCash += nSellEOPrice;
                                    nStockLavenderDrops -= nSellEONoDrops;//should the drops sold be added to the buy EO menu?
                                }
                                else//back to actions menu
                                {
                                    switch(nChoiceSellEO)
                                    {
                                        case 0: break;//valid-->back to actions menu
                                        default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                                    }
                                }
                            }
                            else//back to actions menu 
                            {
                                switch(nChoiceSellEOMenu)
                                {
                                    case 1: printf("Oopsie. Not enough stock :(\n"); break;//not enough stock-->back to actions menu
                                    default: printf("Oopsie. Not enough stock :(\n"); break;//not enough stock-->back to actions menu
                                }
                            }
                        }
                        else if(nChoiceSellEOMenu == 3)//rosemary
                        {
                            printf("Enter no. of drops you wish to Sell: ");
                            scanf("%d", &nSellEONoDrops);//no of drops?
                            if(nSellEONoDrops <= nStockRosemaryDrops)
                            {
                                nSellEOPrice = nSellEONoDrops * nSellPriceRosemary;
                                printf("Total Sell Price = %d\n", nSellEOPrice);
                                displaySellEO();//selling verification
                                printf("Enter choice: ");
                                scanf("%d", &nChoiceSellEO);//sell?back to actions menu?
                                if(nChoiceSellEO == 1)
                                {
                                    nCash += nSellEOPrice;
                                    nStockRosemaryDrops -= nSellEONoDrops;
                                }
                                else//back to actions menu
                                {
                                    switch(nChoiceSellEO)
                                    {
                                        case 0: break;//valid-->back to actions menu
                                        default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                                    }
                                }
                            }
                            else//back to actions menu 
                            {
                                switch(nChoiceSellEOMenu)
                                {
                                    case 1: printf("Oopsie. Not enough stock :(\n"); break;//not enough stock-->back to actions menu
                                    default: printf("Oopsie. Not enough stock :(\n"); break;//not enough stock-->back to actions menu
                                }
                            }
                        }
                        else if(nChoiceSellEOMenu == 4)//mint
                        {
                            printf("Enter no. of drops you wish to Sell: ");
                            scanf("%d", &nSellEONoDrops);//no of drops?
                            if(nSellEONoDrops <= nStockMintDrops)
                            {
                                nSellEOPrice = nSellEONoDrops * nSellPriceMint;
                                printf("Total Sell Price = %d\n", nSellEOPrice);
                                displaySellEO();//selling verification
                                printf("Enter choice: ");
                                scanf("%d", &nChoiceSellEO);//sell?back to actions menu?
                                if(nChoiceSellEO == 1)
                                {
                                    nCash += nSellEOPrice;
                                    nStockMintDrops -= nSellEONoDrops;
                                }
                                else//back to actions menu
                                {
                                    switch(nChoiceSellEO)
                                    {
                                        case 0: break;//valid-->back to actions menu
                                        default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                                    }
                                }
                            }
                            else//back to actions menu 
                            {
                                switch(nChoiceSellEOMenu)
                                {
                                    case 1: printf("Oopsie. Not enough stock :(\n"); break;//not enough stock-->back to actions menu
                                    default: printf("Oopsie. Not enough stock :(\n"); break;//not enough stock-->back to actions menu
                                }
                            }
                        }
                        else//back to actions menu 
                        {
                            switch(nChoiceSellEOMenu)
                            {
                                case 0: break;//valid input-->back to actions menu
                                default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                            }
                        }
                    }
                    else if(nChoiceSellMenu == 2)//sell DO
                    {
                        displaySellDOMenu();//sell DO menu
                        printf("Enter choice: ");
                        scanf("%d", &nChoiceSellDOMenu);//cminds? ebooster? calm? back to actions menu?
                        if(nChoiceSellDOMenu == 1)//clear minds
                        {
                            printf("Enter no. of bottles you wish to Sell: ");
                            scanf("%d", &nSellDONoBottle);//no. of bottles?
                            if(nSellDONoBottle <= nStockCMinds)//valid no. of bottles
                            {
                                displaySellDOConfirmation();//sell DO confirmation menu
                                printf("Enter choice: ");
                                scanf("%d", &nChoiceConfirmSellDO);//sell DO? discontinue transaction?
                                if(nChoiceConfirmSellDO == 1)//sell DO
                                {
                                    nCash += nSellDONoBottle * nSellPriceBottleCMinds;//updates cash
                                    nStockCMinds -= nSellDONoBottle;//updates stock on hand of clear minds
                                }
                                else// discontinue transaction 
                                {
                                    switch(nChoiceConfirmSellDO)
                                    {
                                        case 0: break;//valid input-->back to actions menu
                                        default: printf("Oopsie. Invalid input:(\n");//invalid input-->back to actions menu
                                    }
                                }
                            }
                            else//invalid no. of bottles 
                            {
                                switch(nChoiceSellDOMenu)
                                {
                                    case 1: printf("Oopsie. You don't have enough stock of  Clear Minds :(\n"); break;//invalid nSellDONoBottle-->back to actions menu
                                    default: printf("Oopsie. You don't have enough stock of Clear Minds :(\n"); break;//invalid nSellDONoBottle-->back to actions menu
                                }
                            }
                        }
                        else if(nChoiceSellDOMenu == 2)//energy booster
                        {
                            printf("Enter no. of bottles you wish to Sell: ");
                            scanf("%d", &nSellDONoBottle);//no. of bottles?
                            if(nSellDONoBottle <= nStockEBooster)//valid no. of bottles
                            {
                                displaySellDOConfirmation();//sell DO confirmation menu
                                printf("Enter choice: ");
                                scanf("%d", &nChoiceConfirmSellDO);//sell DO? discontinue transaction?
                                if(nChoiceConfirmSellDO == 1)//sell DO
                                {
                                    nCash += nSellDONoBottle * nSellPriceBottleEBooster;//updates cash
                                    nStockEBooster -= nSellDONoBottle;//updates stock on hand of energy booster
                                }
                                else// discontinue transaction 
                                {
                                    switch(nChoiceConfirmSellDO)
                                    {
                                        case 0: break;//valid input-->back to actions menu
                                        default: printf("Oopsie. Invalid input:(\n");//invalid input-->back to actions menu
                                    }
                                }
                            }
                            else//invalid no. of bottles 
                            {
                                switch(nChoiceSellDOMenu)
                                {
                                    case 2: printf("Oopsie. You don't have enough stock of  Energy Booster :(\n"); break;//invalid nSellDONoBottle-->back to actions menu
                                    default: printf("Oopsie. You don't have enough stock of Eneregy Booster :(\n"); break;//invalid nSellDONoBottle-->back to actions menu
                                }
                            }
                        }
                        else if(nChoiceSellDOMenu == 3)//calming
                        {
                            printf("Enter no. of bottles you wish to Sell: ");
                            scanf("%d", &nSellDONoBottle);//no. of bottles?
                            if(nSellDONoBottle <= nStockCalm)//valid no. of bottles
                            {
                                displaySellDOConfirmation();//sell DO confirmation menu
                                printf("Enter choice: ");
                                scanf("%d", &nChoiceConfirmSellDO);//sell DO? discontinue transaction?
                                if(nChoiceConfirmSellDO == 1)//sell DO
                                {
                                    nCash += nSellDONoBottle * nSellPriceBottleCalm;//updates cash
                                    nStockCalm -= nSellDONoBottle;//updates stock on hand of calming
                                }
                                else// discontinue transaction 
                                {
                                    switch(nChoiceConfirmSellDO)
                                    {
                                        case 0: break;//valid input-->back to actions menu
                                        default: printf("Oopsie. Invalid input:(\n");//invalid input-->back to actions menu
                                    }
                                }
                            }
                            else//invalid no. of bottles 
                            {
                                switch(nChoiceSellDOMenu)
                                {
                                    case 3: printf("Oopsie. You don't have enough stock of  Calming:(\n"); break;//invalid nSellDONoBottle-->back to actions menu
                                    default: printf("Oopsie. You don't have enough stock of Calming :(\n"); break;//invalid nSellDONoBottle-->back to actions menu
                                }
                            }
                        }
                        else// back to actions menu 
                        {
                            switch(nChoiceSellDOMenu)
                            {
                                case 0: break;//valid input-->back to actions menu
                                default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                            }
                        }
                    }
                    else//back to actions menu 
                    {
                        switch(nChoiceSellMenu)
                        {
                            case 0: break;//valid input-->back to actions menu
                            default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                        }
                    }
                }
                else if (cChoiceActionsMenu == 'C' || cChoiceActionsMenu == 'c')// Make DO
                {
                    displayMakeDOMenu(nStockLemonDrops, nStockLavenderDrops, nStockRosemaryDrops, nStockMintDrops, nNoBottleCMinds, nNoBottleEBooster, nNoBottleCalm);//make DO menu
                    printf("Enter choice: ");
                    scanf("%d", &nChoiceMakeDOMenu);//cminds? ebooster? calm? back to actions menu?
                    if (nChoiceMakeDOMenu == 1)//clear minds
                    {
                        printf("Enter no. of bottles you wish to Make: ");//no. of bottles?
                        scanf("%d", &nNoBottleMakeDO);
                        if(isMakeDOValid(nNoBottleMakeDO, nNoBottleCMinds))
                        {
                            displayConfirmMakeDOMenu();//make DO confirmation menu
                            printf("Enter choice: ");
                            scanf("%d", &nChoiceConfirmMakeDO);//make? discontinue transaction?
                            if(nChoiceConfirmMakeDO == 1)//make DO
                            {
                                updateEOStockCMinds(nNoBottleMakeDO, &nStockLemonDrops, &nStockRosemaryDrops, &nStockMintDrops);//updates stocks on hand of EO
                                nStockCMinds += nNoBottleMakeDO;//updates stock on hand clear minds
                                nCash -= nCityCharge;//subtract city charge
                            }
                            else//discontinue transaction 
                            {
                                switch(nChoiceConfirmMakeDO)
                                {
                                    case 0: break;//valid-->back to actions menu
                                    default: printf("Oopsie. Invalid input :(\n"); break;//invalid-->back to actions menu
                                }
                            }
                        }
                        else//back to actions menu 
                        {
                            switch(nChoiceMakeDOMenu)
                            {
                                case 1: printf("Oopsie. You don't have enough Raw Materials :(\n"); break;//invalid nNoBottleMakeDO-->back to actions menu
                                default: printf("Oopsie. You don't have enough Raw Materials :(\n"); break;//invalid nNoBottleMakeDO-->back to actions menu
                            }
                        }
                    }
                    else if (nChoiceMakeDOMenu == 2)//energy booster
                    {
                        printf("Enter no. of bottles you wish to Make: ");
                        scanf("%d", &nNoBottleMakeDO);//no. of bottles?
                        if(isMakeDOValid(nNoBottleMakeDO, nNoBottleEBooster))
                        {
                            displayConfirmMakeDOMenu();//make DO confirmation menu
                            printf("Enter choice: ");
                            scanf("%d", &nChoiceConfirmMakeDO);//make? discontinue transaction?
                            if(nChoiceConfirmMakeDO == 1)//make DO
                            {
                                updateEOStockEBooster(nNoBottleMakeDO, &nStockLemonDrops, &nStockRosemaryDrops, &nStockMintDrops);//updates stocks on hand of EO
                                nStockEBooster += nNoBottleMakeDO;//updates stock on hand energy booster
                                nCash -= nCityCharge;//subtract city charge
                            }
                            else//discontinue transaction
                            {
                                switch(nChoiceConfirmMakeDO)
                                {
                                    case 0: break;//valid-->back to actions menu
                                    default: printf("Oopsie. Invalid input :(\n"); break;//invalid-->back to actions menu
                                }
                            }
                        }
                        else//back to actions menu 
                        {
                            switch(nChoiceMakeDOMenu)
                            {
                                case 2: printf("Oopsie. You don't have enough Raw Materials :(\n"); break;//invalid nNoBottleMakeDO-->back to actions menu
                                default: printf("Oopsie. You don't have enough Raw Materials :(\n"); break;//invalid nNoBottleMakeDO-->back to actions menu
                            }
                        }
                    }
                    else if (nChoiceMakeDOMenu == 3)//calming
                    {
                        printf("Enter no. of bottles you wish to Make: ");
                        scanf("%d", &nNoBottleMakeDO);//no. of bottles?
                        if(isMakeDOValid(nNoBottleMakeDO, nNoBottleCalm))
                        {
                            displayConfirmMakeDOMenu();//make DO confirmation menu
                            printf("Enter choice: ");
                            scanf("%d", &nChoiceConfirmMakeDO);//make? discontinue transaction?
                            if(nChoiceConfirmMakeDO == 1)//make DO
                            {
                                updateEOStockCalm(nNoBottleMakeDO, &nStockLemonDrops, &nStockLavenderDrops, &nStockRosemaryDrops);//updates stocks on hand of EO
                                nStockCalm += nNoBottleMakeDO;//updates stock on hand calming
                                nCash -= nCityCharge;//subtract city charge
                            }
                            else//discontinue transaction 
                            {
                                switch(nChoiceConfirmMakeDO)
                                {
                                    case 0: break;//valid-->back to actions menu
                                    default: printf("Oopsie. Invalid input :(\n"); break;//invalid-->back to actions menu
                                }
                            }
                        }
                        else//back to actions menu 
                        {
                            switch(nChoiceMakeDOMenu)
                            {
                                case 3: printf("Oopsie. You don't have enough Raw Materials :(\n"); break;//invalid nNoBottleMakeDO-->back to actions menu
                                default: printf("Oopsie. You don't have enough Raw Materials :(\n"); break;//invalid nNoBottleMakeDO-->back to actions menu
                            }
                        }
                    }
                    else//back to actions menu
                    {
                        switch(nChoiceMakeDOMenu)
                        {
                            case 0: break;//valid input-->back to actions menu
                            default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                        }
                    }                    
                }
                else if (cChoiceActionsMenu == 'D' || cChoiceActionsMenu == 'd')//Pay Debt
                {
                    displayPayDebtMenu(nDebt);//pay debt menu
                    printf("Enter Choice: ");
                    scanf("%d", &nChoicePayDebtMenu);//full price? half price? back to actions menu?
                    if(nChoicePayDebtMenu == 1)//pay full price
                    {
                        if(nCash >= nDebt)//enough nCash
                        {
                            nCash -= nDebt;//updates displayPerCityDay(...);
                            nDebt = 0;//updates displayPerCityDay(...);
                        }
                        else//not enough nCash 
                        {
                            switch(nChoicePayDebtMenu)
                            {
                                case 1: printf("Oopsie. You don't have enough Cash :(\n"); break;//not enough nCash-->back to actions menu
                                default: printf("Oopsie. You don't have enough Cash :(\n"); break;//not enough nCash-->back to actions menu
                            }
                        }
                    }
                    else if(nChoicePayDebtMenu == 2)//pay desired amount
                    {
                        printf("Enter amount you wish to Pay: ");
                        scanf("%d", &nAmountPayDebt);//how much to pay?
                        if (isValidAmountPayDebt(nAmountPayDebt, nDebt, nCash))//valid nAmountPayDebt
                        {
                            nCash -= nAmountPayDebt;//updates displayPerCityDay(...);
                            nDebt -= nAmountPayDebt;//updates displayPerCityDay(...);
                        }
                        else//invalid nAmountPayDebt
                        {
                            switch (nChoicePayDebtMenu)
                            {
                                case 2: printf("Oopsie. You don't have enough Cash :(\n"); break;//invalid nAmountPayDebt-->back to actions menu
                                default: printf("Oopsie. You don't have enough Cash :(\n"); break;//invalid nAmountPayDebt-->back to actions menu
                            }
                        }
                    }
                    else//back to actions menu
                    {
                        switch(nChoicePayDebtMenu)
                        {
                            case 0: break;//valid input-->back to actions menu
                            default: printf("Oopsie. Invalid input :(\n"); break;//invalid input-->back to actions menu
                        }
                    }
                }
                else if (cChoiceActionsMenu == 'E' || cChoiceActionsMenu == 'e')//Loan
                {
                    displayLoanMenu(nLoan);//loan menu
                    printf("Enter amount you wish to Loan: ");
                    scanf("%d", &nAmountWishLoan);//how much to loan?
                    if (isValidAmountDebtLoan(nAmountWishLoan, nLoan))//valid nAmountWishLoan
                    {
                        nCash += nAmountWishLoan;//updates displayPerCityDay(...);
                        nDebt += nAmountWishLoan;//updates displayPerCityDay(...);
                    }
                    else//invalid nAmountWishLoan
                    {
                        switch (isValidAmountDebtLoan(nAmountWishLoan, nLoan))
                        {
                            case 0: printf("Oopsie. Invalid input :(\n"); break;//invalid nAmountWishLoan-->back to actions menu
                            default: printf("Oopsie. Invalid input :(\n"); break;//invalid nAmountWishLoan-->back to actions menu
                        }
                    }
                }
                else if (cChoiceActionsMenu == 'F' || cChoiceActionsMenu == 'f')//Travel
                {
                    displayTravelMenu(nCity);//travel menu
                    printf("Enter Choice: ");
                    scanf("%d", &nChoiceTravelMenu);//where to travel?
                    if(isValidChoiceTravelMenu(nCity, nChoiceTravelMenu))
                    {
                        nCity = nChoiceTravelMenu;//updates displayPerCityDay(...);
                        nDay++;//updates displayPerCityDay(...);
                        if(nDebt > 0 && nDay <= 15) nDebt += nDebt * 0.1; //charges 10% of unpaid debt
                        if(nDay == 4 || nDay == 8) //free Diffuser Oils + updates Stock on Hand
                        {
                            displayFreebieDO();
                            nStockCMinds += 2;
                            nStockEBooster += 2;
                            nStockCalm += 2;
                        }
                        if(nDay == 6 || nDay == 12)//free Essential Oils + updates Stock on Hand
                        {
                            displayFreebieEO();
                            nStockLemonDrops += 10;
                            nStockLavenderDrops += 10;
                            nStockRosemaryDrops += 10;
                            nStockMintDrops += 10;
                        }

                        nSellPriceLemonPrev = nSellPriceLemon; //keeps the previous Essential Oil Sell Price 
                        nSellPriceLavenderPrev = nSellPriceLavender;
                        nSellPriceRosemaryPrev = nSellPriceRosemary;
                        nSellPriceMintPrev = nSellPriceMint;

                        srand(time(0));
                        nPriceBottleLemon = getPricePerBottleEOStep2(nLowerLemon, nUpperLemon, nCountLemon);
                        nPriceBottleLavender = getPricePerBottleEOStep2(nLowerLavender, nUpperLavender, nCountLavender);
                        nPriceBottleRosemary = getPricePerBottleEOStep2(nLowerRosemary, nUpperRosemary, nCountRosemary);
                        nPriceBottleMint = getPricePerBottleEOStep2(nLowerMint, nUpperMint, nCountMint);

                        srand(time(0));
                        nNoBottleLemon = getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);
                        nNoBottleLavender =  getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);
                        nNoBottleRosemary = getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);
                        nNoBottleMint = getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);

                        nSellPriceLemon = nPriceBottleLemon / 10;
                        nSellPriceLavender = nPriceBottleLavender / 10;
                        nSellPriceRosemary = nPriceBottleRosemary / 10;
                        nSellPriceMint = nPriceBottleMint / 10;

                        nCityCharge = getCityCharge(nCity);
                    }
                    else
                    {
                        switch(nChoiceTravelMenu) //problem with entering a non-numeric char
                        {
                            case 0: break;// back to actions menu-->no update displayPerCityDay(...);
                            default: printf("Oopsie. Invalid input :(\n"); break;//input !=0,1,2,3,4-->back to actions menu-->no update displayPerCityDay(...);
                        }
                    }                    
                }
                else 
                {
                    switch(cChoiceActionsMenu)
                    {
                    case '0': printf("Oopsie. Invalid input :(\n"); break;// back to actions menu
                    default: printf("Oopsie. Invalid input :(\n"); break;// back to actions menu
                    }
                }
            }
            nCash -= nDebt;
            if(nCash < 0) nDebt = nCash * -1;
            else nDebt = 0;
            displayGameSummary(nCash, nDebt, nStockLemonDrops, nStockLavenderDrops, nStockRosemaryDrops, nStockMintDrops, nStockCMinds, nStockEBooster, nStockCalm);
            updateLeaderBoard(nCash);
        }
        else if (nChoiceMainMenu == 2) //view top10 scorers
        {
            fScores = fopen("Scores.txt", "r");
            while((nMaxCharInFile = getc(fScores)) != EOF)//displays the Hall of Oil
            {
                fgets(cName, 50, fScores);
                changeTextColor(6);
                printf("%s", cName);
            }
            fclose(fScores);
            printf("\n");
        }
        else //invalid input
        {
            printf("Oopsie. Invaid input :(\n"); // infinite loop when you enter a non numerical char
            switch (nChoiceMainMenu)
            {
            case !0: break;
            default: break;
            }
        }   
        displayMainMenu(); //main menu
        changeTextColor(15);
        printf("Enter Choice: ");
        scanf("%d", &nChoiceMainMenu);

        nDay = 1, nCash = 1500, nLoan = 10000, nDebt = 4000, nCity = 1;//resets the sales trip

        nStockLemonDrops = 0, nStockLavenderDrops = 0, nStockRosemaryDrops = 0, nStockMintDrops = 0;
        nStockCMinds = 0, nStockEBooster = 0, nStockCalm = 0;
        
        srand(time(0));
        nPriceBottleLemon = getPricePerBottleEOStep2(nLowerLemon, nUpperLemon, nCountLemon);
        nPriceBottleLavender = getPricePerBottleEOStep2(nLowerLavender, nUpperLavender, nCountLavender);
        nPriceBottleRosemary = getPricePerBottleEOStep2(nLowerRosemary, nUpperRosemary, nCountRosemary);
        nPriceBottleMint = getPricePerBottleEOStep2(nLowerMint, nUpperMint, nCountMint);

        srand(time(0));
        nNoBottleLemon = getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);
        nNoBottleLavender =  getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);
        nNoBottleRosemary = getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);
        nNoBottleMint = getNoEOBottles(nLowerNoBottle, nUpperNoBottle, nCountNoBottle);

        nSellPriceLemon = nPriceBottleLemon / 10;
        nSellPriceLavender = nPriceBottleLavender / 10;
        nSellPriceRosemary = nPriceBottleRosemary / 10;
        nSellPriceMint = nPriceBottleMint / 10;

        nSellPriceLemonPrev = nSellPriceLemon; 
        nSellPriceLavenderPrev = nSellPriceLavender;
        nSellPriceRosemaryPrev = nSellPriceRosemary;
        nSellPriceMintPrev = nSellPriceMint;

        nCityCharge = getCityCharge(nCity);
    }
    displayExitMessage(); //goodbye-->exit game
    return 0;
}
