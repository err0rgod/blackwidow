Mafia is a Hid simulated device to break into windows 10/11 and get the Reverse shell.

It works within 30 seconds and provides the reverse shell connection to a VPS VM instance on a Netcat listener or we can also use any other framework for listening.

Developed by err0rgod.




UNDERSTAND


To get a reverse shell into windows systems there are thousands of ways but here we are using netcat because its very good for multiple OS's. 


**STEP 1**

To break into win first step is to break the Firewall and stop it.
This can be done easily with a powershell command with admin access.

```
netsh advfirewall set allprofiles state off
```

this will stop all firewalls which will stop us in sending and receiving data after and on the time of exploitation.
But remember we need power shell with admin access we will do that later in workflow folder.

**STEP 2**

Now when we have stopped the Firewall this means we can execute commands and get reverse shell but no.
We still need to turn off the Real time Protection which will instantaneously delete the nc.exe file as a malware because it is basically a malware. 
So we Have to turn it off Also we can turn this off with commands in powershell but here is a catch there is a thing that will not let it happen if you run the command to turn off RTP it won't be executed but also won't show any error this can lead to fake approval of the command that  it had worked. so we have to tackle it first. the command to turn off RTP is 


```
Set-MpPreference -DisableRealtimeMonitoring $true
```


**STEP 3**

The main player which is stopping us to turn off the RTP is Tamper Protection this is the thing which will stop all the malicious commands so we have to turn it off first but it also has a catch wtf
This can only be turned off by GUI there is no option to turn it off by CLI.
So we have to emulate this with HID with our MAFIA.
and after that we can use the command to turn off the RTP.

**STEP 4**

After we had turn off all three things Now we can execute our payload which is in the code. to connect to the IP address with nc. 
to do this first we will download it throw iwr from web and store it then execute it to connect to the nc listener.


WORKFLOW


First we will Open setting < virus and defender 
then we will turn off the Tamper protection by GUI.
And then we can execute all the commands to turn off RTP and Firewalls 
after that we can run our payload commands with nc.
