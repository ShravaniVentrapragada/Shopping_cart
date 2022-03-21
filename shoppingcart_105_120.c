#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int display(); /*FUNCTION PROTOTYPE*/
void push();   
void display_item();
#define MAX1 20 /*MAXIMUM NUMBER OF DISHES THAT CAN BE STORED IN CART*/
#define MAX2 10 /*MAXIMUM NUMBER OF QUANTITY THAT CAN BE STORED*/
int top=-1, stack1[MAX1], stack2[MAX2];
int main() /*MAIN PROGRAM*/
{
char password[10],username[10], ch; int i;
printf("***************@@@@@@@@ WELCOME TO SCHEF!!@@@@@@@@***************\n");
printf("\n\n\nEnter Username: ");
gets(username);
printf("\nHello %s!!!,\n                      ___^^ Welcome to our Online Shopping!^^___\n",username);
again:
printf("\n\nEnter the password <should be 5 characters>:");
for(i=0;i<5;i++)
{
ch = getch();
password[i] = ch;
ch = '*' ;
printf("%c",ch);
}
printf("\n\n");
display();
return 0;
}
int display() /*DEFINING FUNCTION DISPLAY TO DISPLAY ITEMS IN A MENU*/
{
	int n,no,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,c ;
	printf("\n\n______________________________________________________________________________");
	printf("\n                                  -----MENU:----- ");
	printf("\n______________________________________________________________________________\n");
	printf("\n**APPETISERS**\n\n");
	printf("1.Chicken Manchow Soup (NON VEG) *250 for 2 \n\nTopped with crunchy noodles and made with nutritious veggies and chicken cooked in an aromatic dark brown broth,\nthis Indo-Chinese soup has all the goodness but none of the guilt of raasta Chinese food.\n Cuisine Inspiration : Oriental / Asian\n Difficulty Level : Easy\n Cooking Time : 10 mins\n Spice Level : Medium\nWHAT WE SEND:\n Olive Oil, Fried Noodles, Garlic, Ginger, Celery, Carrot, Cabbage, French Beans, Mushroom, Cilantro,\n Scallion, and Vegetable Stock.\nWHAT YOU NEED:\n Black, Pepper, Medium Pot, Salt\n\n");
	printf("2.Caesar Salad (VEG) *200 for 2\n\nThe popularity of this salad around the world is most likely due to a man who claims to have invented the salad,\nCaesar Cardini,not Julius Caesar as many people believe. Invented one evening when supplies were running low, \nnecessity was Cardini's muse for this 1920's classic. And like any great salad that gets its swagger from a great\ndressing,you'll be using our signature caesar dressing to whip up this menu staple in your own kitchen - preferably\n tableside,how it was originally prepared.\n Cuisine Inspiration : Italian\n Difficulty Level : Easy\n Cooking Time : 10 mins\n Spice Level : N/A\nWHAT WE SEND:\n Olive Oil, Olives, Caeser Dressing, Fresh Greens, Parmesan Cheese, Croutons.\nWHAT YOU NEED:\n Black Pepper, Large Pan, Medium Pan, Salt\n\n");
	printf("3.Kale Chicken And Grape In Orange Vinaigreette (NON VEG) *250 for 2\n\nKale is one of the healthiest vegetables around and has brilliant cholesterol lowering abilities.And chicken has\nhigh level of proteins.In this zesty yet simple salad, there is no cooking involved and you can put this dish\ntogether in a matter of minutes.The orange dressing along with the almond slivers and juicy grapes adds a satisfying\ncrunch and heavenly flavour to this hearty salad.\n Cuisine Inspiration : American\n Difficulty Level : Easy\n Cooking Time : 10 mins\n Spice Level : Low\nWHAT WE SEND:\n Kale Grapes Almond Orange vinaigrette Ricotta Cheese, chicken\nWHAT YOU NEED:\n Black Pepper,Large Mixing Bowl,Salt\n\n");
	printf("4.Lahori Chatpate Charee Aloo (VEG) *250 for 2\n\n Discount=30%\n\n Millets and grains are an essential part of winters across India, especially Punjab. Millet flours were used in\nextensive preparations across Lahore and Amritsar. Here, we bring one such preparation from erstwhile Punjab tossed\nin a tangy dry rub that brings out the Chatpati Punjabiyat in the potatoes.\n Cuisine Inspiration : Artisanal Indian\n Difficulty Level : Easy\n Cooking Time : 20 mins\n Spice Level : Medium\nWHAT WE SEND:\n Sesame Oil,Baby Potatoes,Charre Aloo Marinade,Tadka Mix,Pomegranate,Chili Flakes, Mustard Paste, Cilantro,\n Basil Leaves, Mint Mayo, Satay Sticks\nWHAT YOU NEED:\n Black Pepper, Large Sauté Pan,Medium Bowl, Salt\n\n");
	printf("5.Falafel Bhel (VEG) *250 for 2\n\n Arabic street food meets Mumbai chaat. In this recipe, we are replacing the puffed rice with high fibre,\nprotein-rich falafels making this a guilt free version of our quintessential street food. Mixed in a flavoured yoghurt\nand garnished with pomegranates, you'll be surprised how delicious this fusion tastes...\nthis might just make it to the hall of fame of healthy street food.\n Cuisine Inspiration : Lebanese\n Difficulty Level : Easy\n Cooking Time : 25 mins\n Spice Level : Low\nWHAT WE SEND:\n Puri Sev Zatar Powder Parsley Cucumber Green Chili Tomato Onion Lime Pomegranate Falafel Mixture Flavoured Curd\nWHAT YOU NEED:\n Large Mixing Bowl, Medium Pan, Oil for frying\n\n");
	printf("6.Chicken 65 (NON VEG) *250 for 3\n\nChicken 65 is a spicy, deep-fried chicken dish originating from Hotel Buhari, Chennai, India, as an entrée, or\nquick snack.The flavour of the dish can be attributed to red chillies but the exact set of ingredients for the\nrecipe can vary.\nWHAT WE SEND:\nboneless chicken, red chilli powder, turmeric powder, ginger garlic paste, garam masala powder, all purpose flour/maida, corn flour\nbeaten egg, green chillies, curry leaves, yogurt, coriander leaves, lemon, onion\nWHAT YOU NEED:\nLarge Mixing Bowl, Medium Pan, Oil for frying, salt\n");
	printf("\n\n**MAIN COURSE**\n");
	printf("\n7.Vegetable Panang Curry (VEG) *300 for 2\n\n Discount=25%\n\nPanang is a type of red Thai curry that is thick, salty and sweet, with a nutty peanut flavor.\nSkip the store bought version of Thai curry pastes a miss which almost always contain fish sauce or\nshrimp paste and savour our 100% vegetarian version which is the highlight of this dish.\n Cuisine Inspiration : Thai\n Difficulty Level : Easy\n Cooking Time : 30 mins\n Spice Level : Low\nWHAT WE SEND\nOlive oil,Basmati rice,Ginger & garlic paste,Panang curry paste,Coconut milk powder,Red bell pepper,Broccoli,\nFrench beans,Zucchini,Scallions,Lemon,Peanuts\nWHAT YOU NEED:\n Black Pepper,Large Pot,Medium Pot,Salt\n\n");
	printf("8.Desi Ratatouille Makhni with Onion Pulao (VEG) *300 for 2\n\n This is an intriguing Indian twist on a French classic.\n Our signature makhni gravy forms the base for a medley of veggies found abundantly in Mediterranean cooking.\nServed with a side of onion rice, this flavourful dish is sure to win hearts whatever food camp you belong to.\nCuisine Inspiration : Artisanal Indian \n Difficulty Level : Easy\n Cooking Time : 35 mins\n Spice Level : Medium \nWhat we Send: Olive Oil, Garlic, Cumin Seeds, Chilli Powder, Makhni Gravy, Cream, Fried Onions, Basmati Rice, Paneer, Zucchin, Bell Pepper,\n Onion, Tomato, Cilantro, Parathas (optional) \nWhat you Need:Black Pepper, Large Pan, Medium Pot, Salt\n\n");
	printf("9.Desi Khurchan Quesadilla with Jalapeno Grape Salsa (VEG) *400 for 2\n\nIn this Indo-Mexican fusion, you will be sautéing fresh veggies in our spicy & tangy spice mix mixed with cheese.\nThe side of grape jalapeno salsa is a welcome twist from the traditional salsa recipe and rounds about this dish perfectly.\n Cuisine Inspiration : Mexican\n Difficulty Level : Easy\n Cooking Time : 30 mins\n Spice Level : Medium\nWHAT WE SEND\nOlive Oil, Onion, Garlic, Zucchini, Baby Corn, Carrot, Bell Peppers, Cilantro, Tortilla wraps, Cheddar Cheese, Grapes, Jalapeno, Sour Cream, Khurchan Spice Mix\nWHAT YOU NEED\nBlack Pepper, Large Non-stick Pan, Salt\n\n");
	printf("10.Penne In Roasted Tomato Sauce (VEG) *300 for 2\n\n Whole wheat penne is a quick, healthy meal any night of the week. The secret sauce (quite literally) is our in-house roasted\n tomato coulis which has all the creaminess of a pasta sauce without any dairy used whatsoever. Who said healthy can't be tasty! \nCuisine Inspiration : Italian\n Difficulty Level : Easy\n Cooking Time : 25 mins\n Spice Level : Low\n \nWHAT WE SEND:\nOlive Oil, Whole Wheat Penne, Chili Flakes, Garlic, Kale, Sundried Tomato, Olives, Basil, Roasted tomato, coulis, Parmesan Cheese.\nWHAT YOU NEED:\n Black Pepper,Large Pan,Large Pot,Medium Pot,Salt\n\n");
	printf("11.Vegetable Lasagna (VEG) *350 for 2\n\n Discount=30%\n\nLasagna is one of those perfect comfort foods that’s appropriate for almost every culinary situation,\nalthough it can make hours to make. This quick and easy lasagna will blow your mind. In this recipe, you’ll use lasagna sheets with a creamy, smooth béchamel sauce\nand tangy tomato concasse for a dish that preserves the deep, rich flavors of the classic but serves it in a fraction of the time.\n Cuisine Inspiration : Italian\n Difficulty Level : Medium\n Cooking Time : 35 mins\n Spice Level : Medium\nWHAT WE SEND:\n Olive Oil, Lasagna Sheets, Onion, Garlic, Chili Flakes, Zucchini, Bell Pepper, Basil Leaves, Tomato, Concasse, White Sauce, Mozzarella Cheese,\nParmesan Cheese, Paper Mould\nWHAT YOU NEED:\n Black Pepper, Large Non-stick Pan, Medium Bowl, Oven\n\n");
	printf("12.Honey Sriracha Veggies Over Buttered Noodles (VEG) *300 for 2\n\nSavoury, buttery with a tint of heat – these honey sriracha veggies over noodles are easy and crazy delicious\nand will take your Sriracha addiction to the next level.\nCuisine Inspiration : Chinese\n Difficulty Level : Easy\n Cooking Time : 15 mins\n Spice Level : Medium\nWHAT WE SEND:\n Sesame Oil, Butter, Garlic, Mushrooms, Broccoli, Zucchini, Baby corn, Sriracha-Honey Sauce, Noodle, Scallions, Sesame seeds, Corn flour\nWHAT YOU NEED:\n Strainer,Large Wok (or Kadai),Medium Pot\n\n");
	printf("13.Potato Rosemary Pizza (VEG) *250 for 2\n\nPotatoes on pizza? It's true. Ditch the traditional tomato sauce and venture into this heavenly combo of potatoes\nand rosemary over white sauce – it’ll knock your socks off!\n Cuisine Inspiration : Italian\n Difficulty Level : Medium\n Cooking Time : 30 mins\n Spice Level : Low\n WHAT WE SEND:\nOlive Oil, Garlic,Rosemary, Potato, Onion, Pizza Dough, Flour,White Sauce, Mozzarella Cheese, Butter Paper.\n WHAT YOU NEED:\nBaking Tray, Black Pepper, Large Non-stick Pan, Medium Bowl, Salt\n\n");
	printf("14.Charmoula Spiced Burger (VEG) *450 for 2\n\n Discount=40%\n\n In this recipe, you will be making wholesome veggie burgers then slathering them with a zesty charmoula mayonnaise.\n Charmoula powder is a traditional Moroccan seasoning with deep and savoury flavours of cumin, coriander, sweet paprika, and citrus.\nThe result is a simply delicious take on an American classic. \n Cuisine Inspiration : American\n Difficulty Level : Easy\n Cooking Time : 35 mins\n Spice Level : Medium\n WHAT WE SEND:\nOlive oil, Garlic, Green Chili, Vegetable Mix, Tomato, Fresh Green Burger Mix Batter, Mix Breadcrumbs, Cheese Slice, Charmoula Mayo Burger Buns.\nWHAT YOU NEED\n Black Pepper, Large Non-stick Pan, Medium Bowl, Salt.\n\n");
	printf("\n **DESSERTS**\n\n");
	printf("15.Oreo Cheesecake Truffles (VEG) *200 for 2\n\n Discount=20%\n\nThis is the stuff that dreams are made of: Oreo cookie crumbs are blended with cream cheese and covered with a chocolate\nshell for the best-tasting truffles ever. \n Cuisine Inspiration : American\n Difficulty Level : Easy\n Cooking Time : 10 mins\n Spice Level : N/A\nWHAT WE SEND\n Oreo Cookies, Philadelphia Cream Cheese, Chocolate Skewers.\nWHAT YOU NEED:\n Medium Bowl, Small Pot\n\n");
	printf("16.Chocolate Canberry Modak (VEG) *300 for 2 \n\nOn this auspicious occasion of Ganeshotsav, we bring you Lord Ganesha's favorite sweet dish, modak in a modernized version where you’ll be making up modaks out of a\n chocolate cranberry and mawa mixture and garnishing it with pistachio powder.\n Makes 8 - 10 pieces. \nCuisine Inspiration : Indian\n Difficulty Level : Easy\n Cooking Time : 40 Mins\n Spice Level : N/A\n WHAT WE SEND\n Mawa, Sugar, Dark Chocolate, Cocoa Powder, Milk Powder, Dried Cranberry, Pistachio Powder, Mould\n WHAT YOU NEED\n Grater, Medium Bowl, Medium Pan.\n\n");
	printf("17.Gulab Jamun (VEG) *250 for 2\n\nGulab Jamun is one of India’s most popular sweet. These deep-fried dumplings/donuts made of dried milk [khoya] are dipped in a rose-cardamom flavored sugar syrup\nand make quite a treat.\n Cuisine Inspiration : Indian\n Difficulty Level : Easy\n Cooking Time : 40 Mins\n Spice Level : N/A\nWHAT WE SEND:\n khoya, all purpose flour, cardamom powder, baking powder, ghee, milk, sugar, rose water\nWHAT YOU NEED:\n Grater, Medium Bowl, Medium Pan\n\n");
	printf("18.Ras Malai (VEG) *200 for 2\n\nRas malai or rossomalai is a dessert originating from the Bengal region of the Indian subcontinent. The name ras malai is the Hindi cognate\nwhich comes from two words in Bengali: rosh, meaning 'juice', and molai, meaning 'cream'. It has been described as a rich cheesecake without a crust.\n Cuisine Inspiration : Indian\n Difficulty Level : Easy\n Cooking Time : 40 Mins\n Spice Level : N/A\nWHAT WE SEND:\n milk, lemon juice, green cardamom pods, saffron, sugar, pistachios\nWHAT YOU NEED:\n Grater, Medium Bowl, Medium Pan\n\n");
	printf("19.Chocolate Sondesh(VEG) *200 for 2\n\nOld world meets new...we have given a chocolaty twist to a Bengali classic sweet in this sondesh recipe. You'll be adding cocoa powder to make the sondesh and\n garnishing it with chocolate sprinkles...this is a great way to introduce this traditional sweet to the kids...and adults as well. KhoobBhalo!\nMakes 8-10 pcs.\n Cuisine Inspiration : Indian\n Difficulty Level : Medium\n Cooking Time : 20 mins\n Spice Level : N/A\nWHAT WE SEND:\n Paneer, Nolengur, Cardamom Powder, Milk Powder, Cocoa Powder, Chocolate Chips.\nWHAT WE NEED:\n Grater,Medium Pan\n\n");
	printf("20.Nolen Gurer(VEG) *150 for 2\n\nNolen Gurer (date palm jaggery) Sondesh is a deliciously finger licking recipe to treat your family and friends and surprisingly simple to make.\nKhoobBhalo! Makes 8 to 10 pcs.\n Cuisine Inspiration : Indian\n Difficulty Level : Medium\n Cooking Time : 20 mins\n Spice Level : N/A\nWHAT WE SEND:\n Paneer, Nolengur, Cardamom Powder, Milk Powder.\nWHAT YOU NEED:\n Grater, Medium Pan.\n\n");
	
	while(1) /*INFINITE LOOP, WILL END WHEN CHOICE IS 3*/
	{
		printf("Please press\n 1 To order and add items\n 2 To check out and display the items you have ordered\n 3 To exit\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: push(); /*CALLING FUNCTION PUSH TO ADD DISHES*/
		break;
		case 2: display_item(); /*CALLING FUNCTION DISPLAY_ITEM TO DISPLAY ORDERED DISHES*/
		break;
		case 3: exit(1);
		default: printf("SORRY! You have entered a wrong choice\n");
	}
}
return 0;
}
void push() /*DEFINING FUNCTION PUSH TO ADD ITEMS IN THE CART*/
{
int item,qty;
if(top>= MAX1-1)
{
	printf("The cart is overloaded\n");
}
else
{
	printf("Enter the serial number of the dish you want to order:\n");
    scanf("%d", &item);
	printf("Enter the quantity you require for this dish:\n");
	scanf("%d",&qty);
	top++;
	stack1[top]=item;
	stack2[top]=qty;
}
}
void display_item() /*DEFINING FUNCTION DISPLAY_ITEM TO DISPLAY THE ORDERED ITEMS, THEIR INDIVIDUAL RATES, QUANTITY, COST AND TOTAL BILL AMOUNT*/
{ char y;
int i;
float cost1=0,cost2=0,cost3=0,cost5=0,cost6=0,cost8=0,cost9=0,cost10=0,totalc;
int price1,price2,price3,price4,price5,price6,price7,price8,price9,price10,price11,price12,price13,price14,price15,price16,price17,price18,price19,price20;
float cost12=0,cost13=0,cost16=0,cost17=0,cost18=0,cost19=0,cost20=0,cash;
float discount4,discount7,discount11,discount14,discount15,cost4=0,cost7=0,cost11=0,cost14=0,cost15=0;
float adiscount1=0,adiscount2=0,adiscount3=0,adiscount4=0,adiscount5=0,adiscount6=0,adiscount7=0,adiscount8=0,adiscount9=0,adiscount10=0,adiscount11=0,adiscount12=0,adiscount13=0,adiscount14=0,adiscount15=0,adiscount16=0,adiscount17=0,adiscount18=0,adiscount19=0,adiscount20=0;
    if(top==-1)
    {
        printf("\nCart is empty!!");
    }
    else
    {
    	printf("\nYou have purchased the following items:\n");
		printf("ITEMS                                                               QUANTITY       RATE          DISCOUNT(percentage)          TOTAL COST\n");
                for(i=top;i>=0;--i)
        {
		if(stack1[i]==1)
		{
			price1=250;
			cost1=price1*stack2[i]; 
			printf("Chicken Manchow Soup                                                   %d            %d            %d                             %f\n ",stack2[i],price1,adiscount1,cost1);
		}
		else if(stack1[i]==2)
		{
			price2=200;
			cost2=price2*stack2[i];
			printf("Caesar Salad                                                           %d            %d            %d                             %f\n",stack2[i],price2,adiscount2,cost2);
		}
		else if(stack1[i]==3)
		{
			price3=250;
			cost3=price3*stack2[i];
			printf("Kale Chicken And Grape In Orange Vinaigreette                          %d            %d            %d                             %f\n",stack2[i],price3,adiscount3,cost3);
		}else if(stack1[i]==4)
		{
			price4=250; 
			discount4=0.3;
			adiscount4=price4-(discount4*price4);
			cost4=adiscount4*stack2[i];
		printf("Lahori Chatpate Charee Aloo                                            %d            %d            30                            %f\n",stack2[i],price4,cost4);
		}else if(stack1[i]==5)
		{price5=250;
			cost5=price5*stack2[i];
			printf("Falafel Bhel                                                           %d            %d            %d                             %f\n",stack2[i],price5,adiscount5,cost5);
		}else if(stack1[i]==6)
		{price6=250;
			cost6=price6*stack2[i];
			printf("Chicken 65                                                             %d            %d            %d                             %f\n",stack2[i],price6,adiscount6,cost6);
		}else if(stack1[i]==7)
		{  price7=300; 
			discount7=0.25;
			adiscount7=price7-(discount7*price7);
			cost7=adiscount7*stack2[i];
			printf("Vegetable Panang Curry                                                 %d            %d            25                            %f\n",stack2[i],price7,cost7);
		}else if(stack1[i]==8)
		{   price8=300;
			cost8=price8*stack2[i];
			printf("Desi Ratatouille Makhni with Onion Pulao                               %d            %d            %d                             %f\n",stack2[i],price8,adiscount8,cost8);
		}else if(stack1[i]==9)
		{   price9=300;
			cost9=price9*stack2[i];
			printf("Desi Khurchan Quesadilla with Jalapeno Grape Salsa                     %d            %d            %d                             %f\n",stack2[i],price9,adiscount9,cost9);
		}else if(stack1[i]==10)
		{   price10=300;
			cost10=price10*stack2[i];
			printf("Penne In Roasted Tomato Sauce                                          %d            %d            %d                             %f\n",stack2[i],price10,adiscount10,cost10);
		}else if(stack1[i]==11)
		{   price11=350; 
			discount11=0.3;
			adiscount11=price11-(discount11*price11);
			cost11=adiscount11*stack2[i];
			printf("Vegetable Lasagna                                                      %d            %d            30                            %f\n",stack2[i],price11,cost11);
		}else if(stack1[i]==12)
		{   price12=300;
			cost12=price12*stack2[i];
			printf("Honey Sriracha Veggies Over Butterd Noodles                            %d            %d            %d                             %f\n",stack2[i],price12,adiscount12,cost12);
		}else if(stack1[i]==13)
		{   price13=250;
			cost13=price13*stack2[i];
			printf("Potato Rosemary Pizza                                                  %d            %d            %d                             %f\n",stack2[i],price13,adiscount13,cost13);
		}else if(stack1[i]==14)
		{   price14=450; 
			discount14=0.4;
			adiscount14=price14-(discount14*price14);
			cost14=adiscount14*stack2[i];
			printf("Charmoula Spiced Burger                                                %d            %d            40                            %f\n",stack2[i],price14,cost14);
		}else if(stack1[i]==15)
		{   price15=200; 
			discount15=0.2;
			adiscount15=price15-(discount15*price15);
			cost15=adiscount15*stack2[i];
			printf("Oreo Cheesecake Truffles                                               %d            %d            20                            %f\n",stack2[i],price15,cost15);
		}else if(stack1[i]==16)
		{   price16=300;
			cost16=price16*stack2[i];
			printf("Chocolate Canberry Modak                                               %d            %d            %d                             %f\n",stack2[i],price16,adiscount16,cost16);
		}else if(stack1[i]==17)
		{   price17=250;
			cost17=price17*stack2[i]; 
			printf("Gulab Jamun                                                            %d            %d            %d                             %f\n",stack2[i],price17,adiscount17,cost17);
		}else if(stack1[i]==18)
		{   price18=200;
			cost18=price18*stack2[i];
			printf("Ras Malai                                                              %d            %d            %d                             %f\n",stack2[i],price18,adiscount18,cost18);
		}else if(stack1[i]==19)
		{   price19=200;
			cost19=price19*stack2[i];
			printf("Chocolate sondesh                                                      %d            %d            %d                             %f\n",stack2[i],price19,adiscount19,cost19);
		}else if(stack1[i]==20)
		{   price20=150;
			cost20=price20*stack2[i];
			printf("Nolen Gurer                                                            %d            %d            %d                             %f\n",stack2[i],price20,adiscount20,cost20);
		}
		 
    }
}
repeat:
 totalc=cost1+cost2+cost3+cost4+cost5+cost6+cost7+cost8+cost9+cost10+cost11+cost12+cost13+cost14+cost15+cost16+cost17+cost18+cost19+cost20;
printf("\nThe total bill amount is Rs %f\n",totalc); 
printf("\nEnter the cash paid: Rs");
scanf("%f",&cash);
if(cash!=totalc)
{
	printf("\nPlease pay correct amount\n\n");
	goto repeat;
}
printf("\nCash Recieved!!\n");
        printf("\n                  =========================================");
        printf("\n                  |  NO CREDIT OF THE ADDITIONAL DUTY OF  |");
		printf("\n                  |  CUSTOMS LEVIED UNDER SECTION (5) OF  |");
		printf("\n                  |  SECTION-3 OF THE CUSTOMS TARIFF ACT  |");
		printf("\n                  | HAVE BEEN AVAILED/SHALL BE ADMISSABLE |");
		printf("\n                  =========================================");
		printf("\n\n                   (^~^)THANK YOU.VISIT US AGAIN!!(^~^)");
		printf("\n\n                    THANK YOU FOR USING OUR SERVICE!!\n\n");
		printf("Press n to exit SCHEF");
		scanf("%c",y);
		if(y=='n')
		{
			exit(1);
		}
}
