#include<stdio.h>
#include<stdlib.h>

void conv();
void weld();
void paint();
void dyano();
void crane();
void cnc();
void autom();
void chem();
void food();
void Pharma();
void ferti();
void coltw();
void htex();
void pump();
void strg();
void react();
void mill();
void slicers();
void blend();
void oven();
void refri();
void Count();
void Capsule();
void Tube();
void Coat();
void frtd(); 
void rtrd();
void frtm();
void comp();
//void temp(); //added method
int main()
{
int ans;
//clrscr();
while(1)
{
printf("\n\n-*-*-*-*->>>> MARKETING MACHINERY FOR INDUSTRIES <<<<-*-*-*-*-\n");
printf("1. CHEMICAL\n2. TEXTILE (Currently Unavailable)\n3. PETROLEUM (Currently Unavailable)\n4. FOOD PROCESSING\n5. PHARMACEUTICAL\n6. AUTOMOBILE\n7. FERTILIZER\n8.EXIT");
printf("\nEnter your choice of industry\t");
scanf("%d",&ans);
switch(ans)
{
case 1:chem();break;
case 4:food();break;
case 5:Pharma();break;
case 6:autom();break;
case 7:ferti();break;
case 8:exit(0);break;
default:printf("INVALID CHOICE\n");
}
}
//getch();
return 0;
}


void autom()
{
int choice=1;
while(choice)
{
printf("\n\n----------------MACHINERIES FOR AUTOMOBILE INDUSTRY----------------\n");
printf("1. CONVEYOR BELT\n2. WELDING ROBOT\n3. PAINTING ROBOT\n4. DYANOMETER\n5. EOT CRANE\n6. CNC MACHINE\n7. Back To Main Menu");
printf("\nEnter your choice: \t");
scanf("%d",&choice);
switch (choice)
{
case 1:conv();break;
case 2:weld();break;
case 3:paint();break;
case 4:dyano();break;
case 5:crane();break;
case 6:cnc();break;
case 7:main();break;
default:printf("INVALID CHOICE/n");
}
}
}

void conv()
{
printf("\n----------------SPECIFICATIONS OF CONVEYOR BELT----------------\n");
printf("1.   Size:1/2\",21/32\"\n2.   Type: Wrapped v Belt, Raw edge v Belt, Poly v Belt\n3.   Materials: Fine coal grains\n4.   Heavy duty scrap metal: Minerals- Coal ore\n5.   Price Rs1800\n");
}

void weld()
{
printf("\n----------------SPECIFICATIONS OF WELDING ROBOT----------------\n");
printf("1.   Weight:<=10kg\n2.   Connection capacity:100w-120w\n3.   Connection voltage:50-60v\n4.   Material used: Steel\n5.   Automobile voltage control\n6.   Digital display\n7.   Price Rs 13lakh\n");
}

void paint()
{
printf("\n----------------SPECIFICATIONS OF PAINTING ROBOT----------------\n");
printf("1.   Max. payload:165kg\n2.   Mass:1350kg\n3.   Mounting type: Floor\n4.   Power requirement: 7.5kva\n5.   Price Rs 4lakh\n");
}

void dyano()
{
printf("\n----------------SPECIFICATIONS OF DYANOMETER----------------\n");
printf("1.   Type: Eddy current\n2.   Max power: 130kw\n3.   Max speed: 10000rpm\n4.   Max torque: 400nm\n5.   Price Rs 30lakh \n");
}

void crane()
{
printf("\n----------------SPECIFICATIONS OF EOT CRANE----------------\n");
printf("1.   10 tons span\n2.   15.6 meters lift height\n3.   Input power: 415v,3 phase,50hz\n4.   Noise level: 70db\n5.   Price Rs 13lakh/unit\n");
}
void cnc()
{
printf("\n----------------SPECIFICATIONS OF CNC MACHINE-----------------\n");
printf("1.   8 Station tool turner\n2.   Chuck size 200 mm\n3.   Linear motion guedeways\n4.   Pre-tensioned ball screws on both the axes\n5.   X axis--20x10mm\n6.   Z axis--32x10mm\n7.   Price Rs 20lakh\n");
}


void chem()
{
int choice=1;
while(choice)
{
printf("\n\n----------------MACHINERIES FOR CHEMICAL INDUSTRY----------------\n");
printf("1.REACTORS\n2.STORAGE VESSELS\n3.PUMPS\n4.HEAT EXCHANGER\n5.COOLING TOWER\n6.Back To Main Menu\n");
printf("\nEnter your choice: \t");
scanf("%d",&choice);
switch (choice)
{
case 1:react();break;
case 2:strg();break;
case 3:pump();break;
case 4:htex();break;
case 5:coltw();break;
case 6:main();break;
default:printf("INVALID CHOICE/n");
}
}
}
void react()
{
printf("\n----------------SPECIFICATIONS OF REACTOR----------------\n");
printf("1.SIZE:<=25 meters HIGH\n2.CAPACITY:1000-15000 liters\n3.TYPES: Batch Reactors, Catalytic Reactors, Continuous Stirrers Tank Reactor\n4.MATERIALS USED: Carbon Steel, Stainless Steel, Steel Alloys, Graphite, Glass, Titanium, Plastic, Monel,\n5.PRICE: About 3.0Lackhs\n");
}
void strg()
{
printf("\n----------------SPECIFICATIONS OF STORAGE VESSELS----------------\n");
printf("1.SIZE:10 ft  - 412 ft in Diameter \n2.CAPACITY:10-15000 liters\n3.TYPES: Fixed-roof tanks, External floating roof tanks, Internal floating roof tanks, Pressure tanks, Variable vapor space tanks, LNG (Liquefied Natural Gas) tanks.\n4.PRICE : Rs 50000 - 200000\n");
}
void pump()
{
printf("\n----------------SPECIFICATIONS OF PUMPS----------------\n");
printf("1.PUMP SPEED : 800 gal/min \n2.ELECTRICITY CONSUMPTION:60-100kWt \n3.TYPES:  Centrifugal Pumps, Submersible Pumps , Fire Hydrant Systems. Diaphragm Pumps, Gear Pumps.\n4.PRICE : Rs 8000 - 200000\n");
}
void htex()
{
printf("\n----------------SPECIFICATIONS OF HEAT EXCHANGER----------------\n");
printf("1.SIZE : Few Meters \n2.SUPPORTING LAW : Laws of Thermodynamics\n3.TYPES: Shell and tube heat exchangers, Double pipe heat exchangers, Plate heat exchangers \n4.PRICE : Rs 4200 - 10000\n");
}
void coltw()
{
printf("\n----------------SPECIFICATIONS OF COOLING TOWER----------------\n");
printf("1.HEAT REJECTION RATE :3 gal/min\n2.SIZE : 200 meters tall,100 meters diameter \n3.TYPES:  Crossflow, Counterflow, and Hyperbolic Cooling towers\n4.PRICE : Rs 1800000 - 5000000\n");
}


void ferti()
{
int choice=1;
while(choice)
{
printf("\n\n----------------MACHINERIES FOR FERTILIZER INDUSTRY----------------\n");
printf("1.COMPOST WINDROW TURNER\n2.FERTILIZER MIXER\n3.FERTILIZER DRYING MACHINE\n4.ROTARY DRUM\n5.Back To Main Menu");
printf("\nEnter your choice: \t");
scanf("%d",&choice);
switch (choice)
{
case 1:comp();break;
case 2:frtm();break;
case 3:frtd();break;
case 4:rtrd();break;
case 5:main();break;
default:printf("INVALID CHOICE/n");
}
}
}

void comp()
{
printf("\n 1.HOOD CONSTRUCTION: 3 x 5x 3/16 Tube Steel Frame 12 Ga. Sheet Steel \n2.TRANSPORT DIMENSIONS: Length: 15' Width: 7' Height: 14'2 \n3.MACHINE WEIGHT:4,500 Lbs\n4.BALLAST WEIGHTS: Large Box: 5,200 Lbs concrete Small Box: 1,800 Lbs concrete\n5.OPERATIONAL WEIGHT:11,500 Lbs\n");
}

void frtm()
{
printf("1.BLAST RESISTANCE : 10kV\n2.HARDNESS : 2\n3.MAX RF INPUT: 100 RF \n4.RF USE : 10 RF\n4.RF STORAGE: 20,000 RF\n");
}

void frtd()
{
printf("1.APPLICATION : Drying Fertilizers\n2.POWER: 5.5kW\n3.CAPACITY: 1-2 tonnes\n4.SPEED : 6 rot/min\n");
}

void rtrd()
{
printf("1.WIDTH: 75-150 inch\n2.DIAMETER: 24-50 inch\n3.SPEED:0.58 RPM\n");
}


void food()
{
int choice=1;
while(choice)
{
printf("\n\n----------------MACHINERY FOR FOOD PROCESSING----------------\n");
printf("1.Flour mill machine\n2.vegetable or fruit slicers\n3.blending metchine\n4.large oven\n5.refrigerators\n6.Back To Main Menu");
printf("\n enter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:mill();break;
case 2:slicers();break;
case 3:blend();break;
case 4:oven();break;
case 5:refri();break;
case 6:main();break;
default:printf("Invalid choice\n");
}
}
}

void mill()
{
printf("\n----------------Specification of Flour Mill machine----------------\n");
printf("1.Size:32.5x13.5x20\n2.Weight:48kgs\n3.operating volt:220v  AC  50Hz\n4.unit consumption:1 unit per hour\n5.price:5000\n");
}

void slicers()
{
printf("\n----------------Specification of vegetable or Fruits slicers----------------\n");
printf("1.weight:2.91 pounds\n2.material:plastic\n3.Type:shredders,Grater and slicer\n4.price:750\n");
}

void blend()
{
printf("\n----------------Specification of Blending machine----------------\n");
printf("1.Weight:1.4kg\n2.power supply:100W\n3.Power consumed:500W\n4.price:2500\n5.material:stainless steel\n");
}

void oven()
{
printf("\n----------------Specification of large ovens----------------\n");
printf("1.weight:12.2kg\n2.capacity:17L\n3.power output:700W\n4.price:10000\n");
}

void refri()
{
printf("\n----------------Specification of Refrigerator----------------\n");
printf("1.Weight:52kg\n2.capacity:253L\n3.Insulation type: Cyclopentane insulation\n4.Technology used: Dual fan Technology, Digital inventor Technology\n5.price:27000\n");
}


void Pharma()
{
int choice=1; 
while(choice)
{
printf("\n\n----------------Machinery for Pharmaceutical----------------\n");
printf("1.Tablet counting machine\n2.Capsule polishing machine\n3.Tube Filling and Sealing machine\n4.Tablet coating machine\n5.Back To Main Menu\n");
printf("\n Enter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:Count();break;
case 2:Capsule();break;
case 3:Tube();break;
case 4:Coat();break;
case 5:main();break;
default:printf("Invalid choice\n");
}
}
}

void Count()
{
printf("\n----------------Specification of Tablet counting machine----------------\n");
printf("1.Weight:150kg\n2.power supply:single phase 110/120v 60Hz or 220/240v 50Hz\n3.output per min:5 to 16 Dia Tab-15000 per hour\n4.capacity:700 pcs/min\n5.material:stainless steel\n6.price:1 Lack\n");
}

void Capsule ()
{
printf("\n----------------Specification of Capsule polishing machine----------------\n");
printf("1.weight net:55lb\n2.weight shipped:120lb\n3.motor:1/4 hp, permanent magnet, variable speed,115v or 230v\n4.price:2 Lack\n");
}

void Tube()
{
printf("\n----------------Specification of Tube filling and sealing machine----------------\n");
printf("1.weight:100kg\n2.power consumption:400W\n3.output:10-15 Tubes/min\n4.price:4 lack\n");
}

void Coat()
{
printf("\n----------------Specification of Tablet coating machine----------------\n");
printf("1.Loading capacity:100-120\n2.RPM of pan:10/30\n3.Heater KW:4.5KW\n4.price:1 Lack\n");
}

