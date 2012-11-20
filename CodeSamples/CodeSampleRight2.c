            //if day entered is 7

            if(input==7)
        {
          while(fscanf(flights, "%d %d %d:%d%c %d:%d%c %s", flight_number, route_id, d_hour, d_mins, d_letter, a_hour, a_mins, a_letter, days) != EOF)
            {
              if(id==route_id)
          {
            while(z<7)
              {
                if(days[z]==7)
            {
             // if(check_days() == TRUE)
                {
                  //check_time();
                  if(layover >= 60 && layover <= 120)
              {
                printf("Flight %d (%s)\n    %d:%d%c.m. %s (%s)\n    %d:%d%c.m. %s (%s)\n", flight_number, travel_days, d_hour, d_mins, d_letter, departure_city, departure_input, a_hour_stop, a_mins_stop, a_letter_stop, stop_city, stop_code);
                printf("Flight %d (%s)\n    %d:%d%c.m. %s (%s)\n    %d:%d%c.m. %s (%s)\n", flight_number, travel_days, d_hour_stop, d_mins_stop, d_letter_stop, stop_city, stop_code, a_hour, a_mins, a_letter, arrival_city, arrival_input);
              }
                }

            }
              }
          }
            }
        }
