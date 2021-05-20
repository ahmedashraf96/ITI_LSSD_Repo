/*Definitions*/
#define EXT_INTERRUPT_PIN  (3)
#define CHANNEL_A_PIN      (2)

/*Flag used in printing operations*/
int print_flag = 0;

/*Counter used to count rising edges*/
signed int counter = 0;

/*Encoder track function*/
void encoder_track_func(void)
{
  /*Checking the channel A pin value*/
  if(digitalRead(CHANNEL_A_PIN) == LOW)
  {       
    /*Printing the forward mode*/
    print_flag = 1;
    
    /*Increase the counter by 1*/
    counter++;
  }
  else
  {
    /*Printing the backward mode*/
    print_flag = 2;
    
    /*Decrease the counter by 1*/
    counter--;    
  }

  /*Return from this function*/
  return;
}

void setup() 
{
  /*Serial terminal initialization*/
  Serial.begin(9600);

  /*Initializing the external interrupt and channel A pins as input*/
  pinMode(EXT_INTERRUPT_PIN, INPUT);
  pinMode(CHANNEL_A_PIN, INPUT);

  /*Attaching interrupt to pin 2 on change edge*/
  attachInterrupt(digitalPinToInterrupt(EXT_INTERRUPT_PIN), encoder_track_func, CHANGE);
}

void loop() 
{
  if(print_flag == 1)
  {
    /*Resetting the print flag*/
    print_flag = 0;
    
    /*Reporting that robot is moving forward*/
    Serial.println("Robot is moving forward");

    /*Reporting the counter current value*/
    Serial.print("Counter current value is: ");
    Serial.println(counter);

  }
  else if(print_flag == 2)
  {
    /*Resetting the print flag*/
    print_flag = 0;

    /*Reporting that robot is moving backward*/
    Serial.println("Robot is moving backward");    

    /*Reporting the counter current value*/
    Serial.print("Counter current value is: ");
    Serial.println(counter);
  }
  else
  {
    /*Do nothing*/
  }
}
