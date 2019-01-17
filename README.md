# ndn-lite-application-for-nRF52840-802154_version
This is an applicatione example to show how to 802.15.4 face in ndn-lite. Specifically, the application runs in the development boards and provides basic NDN communication and simple control function between two boards.
## Requeriments:
    2 nRF52840 DKs
    nRF5 SDK version 15.2.0
    ndn-lite
    nRF-IEEE-802.15.4-radio-driver
## Get start:
1) Download or copy the repository into your local directory.  
2) Open the Segger Embedded Project `ndn_lite_nRF52840_example.emProject`. Then, compile and build the project. For the second board, you should use the key words `#define BOARD_2` in "hardcoded-experimentation.h" file, which locates in `$(YourDownloardDir)/ndn-lite-application-for-nRF52840-802154_version/Application`, then rebuild the project. 
3) Connect the nRF52840 board with your PC and download the application ("start debugging" or "start without debugging" are both OK) to your board.
4) The board will blink LED 3 to indicate the initiation of the board. Then you can test the functions as follows:
5) You can press Button 1 to turn on LED 1 and press Button 2 to turn off LED 1. Moreover, you can press Button 3 to send command Interest to turn on the LED 2 of the other board.
## Tips:
* Please make sure your [Segger Embedded Studio](https://www.segger.com/products/development-tools/embedded-studio/) is the newest version, or you may cannot build the project corectly.
* You may need to config the path of the "ndn_lite_nRF52840_example" project, do it as follows: 1) open the `ndn_lite_nRF52840_example.emProject` with text edior. 2) Modify all the path of something like `../../../nRF5_SDK_15.2.0_9412b96/`, `../../ndn-lite`, `../../nRF-IEEE-802.15.4-radio-driver` to your own path of the directory of your downloaded [nRF5 SDK](https://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v15.x.x/), [ndn-lite](https://github.com/Zhiyi-Zhang/ndn_standalone) and [nRF-IEEE-802.15.4-radio-driver](https://github.com/NordicSemiconductor/nRF-IEEE-802.15.4-radio-driver/tree/68a54dbd6a5df65878313b2eaefc1cacbb073ff3) 3) Please modify the defualt value of `NRF_802154_USE_RAW_API` to `0` (defualt is 1) in the `($YourDowloadDir)/nRF-IEEE-802.15.4-radio-driver/src/nrf_802154_config.h`, so that the ndn-lite can use function `nrf_802154_transmit()` in its 802.15.4 face.
