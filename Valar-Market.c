#include <stdio.h>
#include <cs50.h>

int veg(void);
int meat();
int bread();
int dried();
int care();
void veg_menu(void);
void meat_menu(void);
void bread_menu(void);
void dried_menu(void);
void care_menu(void);
void main_menu(void);
void function(void);

// Simple Market Program

int main(void)
{
    int selection;
    printf("\n[--------------------------------------------------------> Valar Market <-------------------------------------------------------]\n\n");
    printf("\n\t\t<-------------------------> Made With Love By Mohamed Mostafa <------------------------->\n");

    printf("\n(1) View Market Sections\n\n(2) Exit\n\n");
    do
    {
        selection = get_int("Select (1) or (2): ");
        if(selection == 1)
        {
            main_menu();
        }
        else if(selection == 2)
        {
            return 1;
            printf("\n[*] Valar Market Program Has Been Stopped.\n");
        }
    }while(selection < 1 || selection > 2);

}

void main_menu(void)
{
    int select;int v_total = 0;int m_total = 0;int b_total = 0;int d_total = 0;int c_total = 0;
    int method;long bank_number = 147852369;long credit_card = 258963258963;int ccv = 257;long bank;long credit;int cc;
    int discount = 1337;int discount_input;
    printf("\n-----------------------------------------------------------------------------------------------------\n");
    printf("\n\n[Products Section]\n\n(1) Vegetables & fruit\n\n(2) Meat & Fish\n\n(3) Bread & Bread Spreads\n\n(4) Dried Goods\n\n(5) Care Products\n\n");
    select = get_int("\nSelect Category: ");
    if(select == 1)
    {
        veg_menu();
        v_total = veg();
        discount_input = get_int("\n[?] Do You Have A Discount Voucher Code?: ");
        if(discount_input == discount)
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Congratulations, Your Is Discount Voucher Is Valid.\n");
            printf("\n[$] Vegetables Purchased Products Total Cost After [Discount]: %i%s",v_total * (100-15)/100,"$");

        }
        else
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Discount Voucher Code Is Invalid.\n");
            printf("\n[$] Vegetables Purchased Products Total Cost: %i%s",v_total,"$");
            printf("\n-----------------------------------------------------------------------------------------------------");

        }
    }
    else if(select == 2)
    {
        meat_menu();
        m_total = meat();

        discount_input = get_int("\n[?] Do You Have A Discount Voucher Code?: ");
        if(discount_input == discount)
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Congratulations, Your Is Discount Voucher Is Valid.\n");
            printf("\n[$] Meat & Fish Purchased Products Total Cost After [Discount]: %i%s",m_total * (100-15)/100,"$");

        }
        else
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Discount Voucher Code Is Invalid.\n");
            printf("\n[$] Meat & Fish Purchased Products Total Cost: %i%s",m_total,"$");
        }
    }
    else if(select == 3)
    {
        bread_menu();
        b_total = bread();
        discount_input = get_int("\n[?] Do You Have A Discount Voucher Code?: ");
        if(discount_input == discount)
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Congratulations, Your Is Discount Voucher Is Valid.\n");
            printf("\n[$] Bread & Bread Spreads Purchased Products Total Cost After [Discount]: %i%s",b_total * (100-15)/100,"$");

        }
        else
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Discount Voucher Code Is Invalid.\n");
            printf("\n[$] Bread & Bread Spreads Purchased Products Total Cost: %i%s",b_total,"$");

        }
    }
    else if(select == 4)
    {
        dried_menu();
        d_total = dried();
        discount_input = get_int("\n[?] Do You Have A Discount Voucher Code?: ");
        if(discount_input == discount)
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Congratulations, Your Is Discount Voucher Is Valid.\n");
            printf("\n[$] Dried Goods Purchased Products Total Cost After [Discount]: %i%s",d_total * (100-15)/100,"$");

        }
        else
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Discount Voucher Code Is Invalid.\n");
            printf("\n[$] Dried Goods Purchased Products Total Cost: %i%s",d_total,"$");

        }
    }
    else if(select == 5)
    {
        care_menu();
        c_total = care();
        discount_input = get_int("\n[?] Do You Have A Discount Voucher Code?: ");
        if(discount_input == discount)
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Congratulations, Your Is Discount Voucher Is Valid.\n");
            printf("\n[$] Care Purchased Products Total Cost After [Discount]: %i%s",c_total * (100-15)/100,"$");

        }
        else
        {
            printf("\n-----------------------------------------------------------------------------------------------------");
            printf("\n[*] Discount Voucher Code Is Invalid.\n");
            printf("\n[$] Care Purchased Products Total Cost: %i%s",c_total,"$");

        }
    }
    do
    {
        printf("\n-----------------------------------------------------------------------------------------------------");
        int digit;int digits = 123123;
        printf("\n\n[*] Choose Payment Method\n\n(1) Bank Transfer\n\n(2) Credit Card\n\n");
        method = get_int("\n[?] Choose Payment Method: ");
        if(method == 1)
        {
            bank = get_long("\n[!] Enter Bank Account Number: ");
            digit = get_int("\n[!] Enter Bank Verification 6-Digit Code: ");
            if(bank == bank_number && digit == digits)
            {
                printf("\n-----------------------------------------------------------------------------------------------------");
                printf("\n[*] Bank Payment Done Successfully.\n");
                printf("-----------------------------------------------------------------------------------------------------");

            }
            else
            {
                printf("\n-----------------------------------------------------------------------------------------------------");
                printf("\n[x] Bank Payment Failed.\n");
                printf("-----------------------------------------------------------------------------------------------------");
            }
        }
        else if(method == 2)
        {
            credit = get_long("\n[!] Enter Credit Card Number: ");
            cc = get_int("\n[!] Enter Credit Card CCV: ");
            if(credit == credit_card && cc == ccv )
            {
                printf("\n-----------------------------------------------------------------------------------------------------");
                printf("\n[*] Credit Card Payment Done Successfully.\n");
                printf("-----------------------------------------------------------------------------------------------------");

            }
            else
            {
                printf("\n-----------------------------------------------------------------------------------------------------");
                printf("\n[x] Credit Card Payment Failed.\n");
                printf("-----------------------------------------------------------------------------------------------------");
            }
        }
    }while(method < 1 || method > 2);

    char q1;
    do
    {
        q1 = get_char("\n[?] Do You Wish To Continue Shopping (Y = Continue / N = Logout): ");
        if(q1 == 'Y' || q1 == 'y')
        {
            main_menu();
        }
        else if(q1 == 'N' || q1 == 'n')
        {
            printf("\n[*] Valar Market Program Has Been Stopped.\n\n");
        }
    }while(q1 != 'Y' && q1 != 'y' && q1 != 'N' && q1 != 'n');
}

void veg_menu(void)
{
    printf("\n[-] Vegetables & Fruit Products\n");
    printf("\n\n---------------------------------------------------------------------------\n");
    printf("| Item Code\t\tItem\t\t\tPrice\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   1\t\t1 large bag of apples\t\t5$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   2\t\t1 bag of mandarins\t\t7$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   3\t\t1 bag of grapes\t\t\t6$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   4\t\t1 bag of strawberries\t\t4$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   5\t\t1 bag of blueberries\t\t4$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n\n");

}

int veg()
{
    int veg_select;int veg_total = 0;int veg_count;
    do
    {
        veg_count = get_int("How Many Items Do You Wish To Buy From Vegetables & Fruits Menu (1 - 5)?: ");

    }while(veg_count < 1 || veg_count > 5);

    for(int i = 0; i < veg_count; i++)
    {
        do
        {
            veg_select = get_int("\n[*] Enter Item Code: ");

        }while(veg_select < 1 || veg_select > 5);
        if(veg_select == 1)
        {
            printf("\n[+] 1 large bag of apples Added To Cart.\n");
            veg_total += 5;
        }
        else if(veg_select == 2)
        {
            printf("\n[+] 1 bag of mandarins Added To Cart.\n");
            veg_total += 7;
        }
        else if(veg_select == 3)
        {
            printf("\n[+] 1 bag of grapes Added To Cart.\n");
            veg_total += 6;
        }
        else if(veg_select == 4)
        {
            printf("\n[+] 1 bag of strawberries Added To Cart.\n");
            veg_total += 4;

        }
        else if(veg_select == 5)
        {
            printf("\n[+] 1 bag of blueberries Added To Cart.\n");
            veg_total += 4;
        }
    }
    return veg_total;
}

void meat_menu(void)
{
    printf("\n[-] Meat & Fish Products\n");
    printf("\n\n---------------------------------------------------------------------------\n");
    printf("| Item Code\t\tItem\t\t\tPrice\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   1\t\t500g pack of chicken breast\t10$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   2\t\t500g pack of meat\t\t10$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   3\t\t1000g pack of meat\t\t20$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   4\t\t1 pack of cod\t\t\t15$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   5\t\t1 pack of salmon\t\t25$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n\n");

}

int meat()
{
    int meat_select;int meat_total = 0;int meat_count;
    do
    {
        meat_count = get_int("How Many Items Do You Wish To Buy From Meat & Fish Menu (1 - 5)?: ");

    }while(meat_count < 1 || meat_count > 5);

    for(int i = 0; i < meat_count; i++)
    {
        do
        {
            meat_select = get_int("\n[*] Enter Item Code: ");

        }while(meat_select < 1 || meat_select > 5);
        if(meat_select == 1)
        {
            printf("\n[+] 500g pack of chicken breast Added To Cart.\n");
            meat_total += 10;
        }
        else if(meat_select == 2)
        {
            printf("\n[+] 500g pack of meat Added To Cart.\n");
            meat_total += 10;
        }
        else if(meat_select == 3)
        {
            printf("\n[+] 1000g pack of meat Added To Cart.\n");
            meat_total += 20;
        }
        else if(meat_select == 4)
        {
            printf("\n[+] 1 pack of cod Added To Cart.\n");
            meat_total += 15;

        }
        else if(meat_select == 5)
        {
            printf("\n[+] 1 pack of salmon Added To Cart.\n");
            meat_total += 25;
        }
    }
    return meat_total;
}

void bread_menu(void)
{
    printf("\n[-] Bread & Bread Spreads \n");
    printf("\n\n---------------------------------------------------------------------------\n");
    printf("| Item Code\t\tItem\t\t\tPrice\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   1\t\tPeanut butter\t\t\t12$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   2\t\t1 loaf of whole-grain bread\t1$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   3\t\tA bag of 8 buns\t\t\t10$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   4\t\t2 packs of oatmeal\t\t10$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   5\t\t1 pack of rice cakes\t\t20$\t\t\t  |");
    printf("\n---------------------------------------------------------------------------\n\n");

}

int bread()
{
    int bread_select;int bread_total = 0;int bread_count;
    do
    {
        bread_count = get_int("How Many Items Do You Wish To Buy From Bread & Bread Spreads Menu (1 - 5)?: ");

    }while(bread_count < 1 || bread_count > 5);

    for(int i = 0; i < bread_count; i++)
    {
        do
        {
            bread_select = get_int("\n[*] Enter Item Code: ");

        }while(bread_select < 1 || bread_select > 5);
        if(bread_select == 1)
        {
            printf("\n[+] Peanut butter Added To Cart.\n");
            bread_total += 12;
        }
        else if(bread_select == 2)
        {
            printf("\n[+] 1 loaf of whole-grain bread Added To Cart.\n");
            bread_total += 1;
        }
        else if(bread_select == 3)
        {
            printf("\n[+] A bag of 8 buns Added To Cart.\n");
            bread_total += 10;
        }
        else if(bread_select == 4)
        {
            printf("\n[+] 2 packs of oatmeal Added To Cart.\n");
            bread_total += 10;

        }
        else if(bread_select == 5)
        {
            printf("\n[+] 1 pack of rice cakes  Added To Cart.\n");
            bread_total += 20;
        }
    }
    return bread_total;
}

void dried_menu(void)
{
    printf("\n[-] Dried Goods\n");
    printf("\n\n---------------------------------------------------------------------------\n");
    printf("| Item Code\t\tItem\t\t\t\tPrice\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   1\t\t\tPasta\t\t\t\t14$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   2\t\t\t2 cans of chopped tomatoes\t11$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   3\t\t\t1 can of coconut milk\t\t5$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   4\t\t\t1 box of tea\t\t\t4$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   5\t\t\t1 pack of coffee\t\t6$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n\n");

}

int dried()
{
    int dried_select;int dried_total = 0;int dried_count;
    do
    {
        dried_count = get_int("How Many Items Do You Wish To Buy From Dried Goods Menu (1 - 5)?: ");

    }while(dried_count < 1 || dried_count > 5);

    for(int i = 0; i < dried_count; i++)
    {
        do
        {
            dried_select = get_int("\n[*] Enter Item Code: ");

        }while(dried_select < 1 || dried_select > 5);
        if(dried_select == 1)
        {
            printf("\n[+] Pasta Added To Cart.\n");
            dried_total += 14;
        }
        else if(dried_select == 2)
        {
            printf("\n[+] 2 cans of chopped tomatoes Added To Cart.\n");
            dried_total += 11;
        }
        else if(dried_select == 3)
        {
            printf("\n[+] 1 can of coconut milk Added To Cart.\n");
            dried_total += 5;
        }
        else if(dried_select == 4)
        {
            printf("\n[+] 1 box of tea Added To Cart.\n");
            dried_total += 4;

        }
        else if(dried_select == 5)
        {
            printf("\n[+] 1 pack of coffee Added To Cart.\n");
            dried_total += 6;
        }
    }
    return dried_total;
}

void care_menu(void)
{   printf("\n[-] Care Products\n");
    printf("\n\n---------------------------------------------------------------------------\n");
    printf("| Item Code\t\tItem\t\t\t\tPrice\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   1\t\t\t1 pack of toilet paper\t\t3$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   2\t\t\t1 pack of kitchen roll\t\t5$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   3\t\t\t1 tube of toothpaste\t\t6$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   4\t\t\t1 can of deodorant\t\t8$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n");
    printf("|   5\t\t\t1 bottle of cleaning fluid\t10$\t\t  |");
    printf("\n---------------------------------------------------------------------------\n\n");
}

int care()
{
    int care_select;int care_total = 0;int care_count;
    do
    {
        care_count = get_int("How Many Items Do You Wish To Buy From Care Products Menu (1 - 5)?: ");

    }while(care_count < 1 || care_count > 5);

    for(int i = 0; i < care_count; i++)
    {
        do
        {
            care_select = get_int("\n[*] Enter Item Code: ");

        }while(care_select < 1 || care_select > 5);
        if(care_select == 1)
        {
               care_total += 3;
         printf("\n[+] 1 pack of toilet paper Added To Cart.\n");
        }
        else if(care_select == 2)
        {
            printf("\n[+] 1 pack of kitchen roll Added To Cart.\n");
            care_total += 5;
        }
        else if(care_select == 3)
        {
            printf("\n[+] 1 tube of toothpaste Added To Cart.\n");
            care_total += 6;
        }
        else if(care_select == 4)
        {
            printf("\n[+] 1 can of deodorant Added To Cart.\n");
            care_total += 8;

        }
        else if(care_select == 5)
        {
            printf("\n[+] 1 bottle of cleaning fluid Added To Cart.\n");
            care_total += 10;
        }
    }
    return care_total;
}
