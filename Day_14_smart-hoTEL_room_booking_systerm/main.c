#include <stdio.h>
int main(){
    int total_customers,customer_count = 0,total_rooms_booked = 0;
    int room_type,days;
    char name[50],breakfast,wifi,gym;
    float room_per_night = 0,base_fare = 0,services_cost = 0,subtotal = 0;
    float discount = 0,gst = 0,final_bill = 0;
    float total_revenue = 0,highest_bill = 0,lowest_bill = 0;
    printf("======Smart Hotel Room Booking Systerm======\n");
    printf("Enter Total no.of Customers\n");
    scanf("%d",&total_customers);
    
    while(customer_count < total_customers){
        room_per_night = base_fare = services_cost = subtotal = discount = gst = final_bill = 0;
        printf("===Customer %d===\n",customer_count + 1);
        printf("Enter Name:\n");
        scanf("%s",&name);
        printf("Enter Room Type:(1-Delux,2-super-delux,3-suite\n");
        scanf("%d",&room_type);
        printf("Enter No.Of Days:\n");
        scanf("%d",&days);
        printf("Breakfast:(Y/N)\n");
        scanf("%c",&breakfast);
        printf("Wi-fi:(Y/N)\n");
        scanf("%c",&wifi);
        printf("Gym:(Y/N)\n");
        scanf("%c",&gym);
        if(room_type == 1)
        room_per_night = 2500;
        else if(room_type == 2)
        room_per_night = 4000;
        else if(room_type == 3)
        room_per_night = 6000;
        else{
            printf("Invalied room type!Default to Delux Rooms\n");
            room_per_night = 2500;
        }
        base_fare = room_per_night*days;
        if(breakfast == 'Y')
        services_cost += 300*days;
        if(wifi == 'Y')
        services_cost += 100*days;
        if(gym == 'Y')
        services_cost += 200*days;
        
        subtotal = base_fare + services_cost;
        
        if(subtotal > 10000)
        discount = 0.10*subtotal;
        gst = 0.12*(subtotal - discount);
        printf("Base fare: %.0f\n",base_fare);
        printf("Additional Services:%.0f\n",services_cost);
        printf("Subtotal:%.0f\n",subtotal);
        printf("Discount: %.0f\n",discount);
        printf("Gst: %.0f\n",gst);
        printf("Final bill: %.0f\n",final_bill);
        
        total_rooms_booked++;
        total_revenue += final_bill;
        
        if(customer_count == 0){
            highest_bill = final_bill;
            highest_bill = final_bill;
        }else{
            if(final_bill > highest_bill)
            highest_bill = final_bill;
            if(final_bill < lowest_bill)
            lowest_bill = final_bill;
        }
        customer_count++;
        printf("======Hotal summary======\n");
        printf("Total rooms booked:%d\n",total_rooms_booked);
        printf("total revenue: %.0f\n",total_revenue);
        printf("Highest bill: %.of\n",highest_bill);
        printf("lowest bill: %.0f\n",lowest_bill);
        return 0;
    }
    
    
}
