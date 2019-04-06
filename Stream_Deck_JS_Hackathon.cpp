using namespace std;

int main(){
    short buttonState=0; //set the default button state to "Idle"
    bool is_active=1; //determines if the performance tracker is active; default is "Active"
    while (is_active)
    {
        
    }

    bool cpuIsThrottled(short limit)
    {
        //insert code to pull CPU throttle percentage
        return cpuThrottlePer>=limit && limit!=0;
    }
    bool gpuIsThrottle(short limit)
    {
        //insert code to pull GPU throttle percentage
        return gpuThrottlePer>=limit && limit!=0;
    }
    bool cpuIsMaxed(short limit)
    {
        //insert code to pull CPU utilization
        return cpuUtil>=limit && limit!=0;
    }
    bool gpuIsMaxed(short limit)
    {
        //insert code to pull GPU utilization
        return gpuUtil>=limit && limit!=0;
    }
    short frameDropScale(short[] scale)
    {
        //insert code to check frames dropped
        i=scale.size;
        bool stop=false;
        while (i>0 && !stop)
        {
            stop=framesDropped>scale[--i];
        }
        return ++i;
    }
    bool inGame(sniffer[] Games)
    {
        //uses the user-set array of game pointers (dubbed "sniffers") to determine if the user is in-game
        for(sniffer[]) //loop to cycle through the provided pointers until it finds a hit, or runs out of pointers
    }
    void menu()
    {
        //opens Function Control Panel
        /*
        OPTIONS:
        A. Open and set user-defined limits for the default button-state-alerts
            a.CPU Temperature Throttle Limit (0-100%, 0 to disable)
            b.GPU Temperature Throttle Limit (0-100%, 0 to disable)
            c.CPU Utilization Limit (0-100%, 0 to disable)
            d.GPU Utilization Limit (0-100%, 0 to disable)
            e.Frame-Drop severity scale (assign value ranges and associated graphics, use list size of 0 to disable)
        B. Define the parameters for the default time-graphs
            a.CPU Temperature Throttle Time Graph (length recorded, level of detail, enable/disable)
            b.GPU Temperature Throttle Time Graph (length recorded, level of detail, enable/disable)
            c.CPU Utilization Time Graph (length recorded, level of detail, enable/disable)
            d.GPU Utilization Time Graph (length recorded, level of detail, enable/disable)
            e.Frame-Drop Time Graph (length recorded, level of detail, color scheme of severities, enable/disable)
        C. List of game pointers
            a.Define pointers for new games
            b.Auto-detect games based on pre-existing pointers
            c.Modify and categorize list of games
                *can possibly create game-specific parameters for menus A. and B.
            d.Remove unused/unwanted game pointers
        */

    }
    void runLoop()
    {
        //init variables for user-set limits
        short cpuThrotLimit;
        short gpuThrotLimit;
        short cpuUtilLimit;
        short gpuUtilLimit;
        short[] frameDScale;
        //check for tripped limits in prioritized order, and set the state accordingly
        if (cpuIsThrottled(cpuThrotLimit))
        {
            buttonState=6; //button is in the "CPU Throttled" state
            //open cpu process manager and a time graph of CPU temperatures
        }
        else if (gpuIsThrottled(gpuThrotLimit)) 
        {
            buttonState=5; //button is in the "GPU Throttled" state
            //open gpu process manager and a time graph of GPU temperatures
        }
        else if(cpuIsMaxed(cpuUtilLimit))
        {
            buttonState=4; //button is in the "CPU Maxed" state
            //open cpu process manager and a time graph of CPU utilization
        }
        else if(gpuIsMaxed(gpuUtilLimit))
        {
            buttonState=3; //button is in the "GPU Maxed" state
            //open gpu process manager and a time graph of GPU utilization
        }
        else if(frameDropScale(frameDScale)=dropped>0)
        {   
            buttonState=2; //button is in the "Frames Dropped" state
            setButtonColor(colorScale,dropped); //set the color/graphic of the button based on the severity of the frame drop
            //open time graph of dropped frames
        }
        else if(inGame)
        {
            buttonState=1; //button is in the "In-Game" state
        }
        else
        {
            buttonState=0; //button is in the "Idle" state
        }
        
    }
    void buttonPressed()
    {
        //use the state of the button to determine the action of pressing it
        switch (buttonState)
        {
            case 6:
                if(buttonHeld())
                {
                    //disable cpu throttle tracking for this session (HELD)
                }
                else
                {
                    //open cpu process manager and a time graph of CPU temperatures (PRESSED)
                }
                break;
            case 5:
                if(buttonHeld())
                {
                    //disable gpu throttle tracking for this session (HELD)
                }
                else
                {
                    //open gpu process manager and a time graph of GPU temperatures (PRESSED)
                }
                break;
            case 4:
                if(buttonHeld())
                {
                    //disable cpu utilization tracking for this session (HELD)
                }
                else
                {
                    //open cpu process manager and a time graph of CPU utilization (PRESSED)
                }
                break;
            case 3:
                if(buttonHeld())
                {
                    //disable gpu utilization tracking for this session (HELD)
                }
                else
                {
                    //open gpu process manager and a time graph of GPU utilization (PRESSED)
                }
                break;
            case 2:
                if(buttonHeld())
                {
                    //disable dropped frame tracking for this session (HELD)
                }
                else
                {
                    //open time graph of dropped frames (PRESSED)
                }
                break;
            case 1:
                if(buttonHeld())
                {
                    //open control panel/menu (HELD)
                }
                else
                {
                    //enable/disable performance tracking (PRESSED)
                }
                break;
            default:
                if(buttonHeld())
                {
                    //enable/disable performance tracking (HELD)
                }
                else
                {
                    //open control panel/menu (PRESSED)
                }
                break;
        }
    }


    return 0;
}