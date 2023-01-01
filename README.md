# gojiball
A tiny trackball based on the [aball project](https://github.com/brickbots/aball).
STLs are also on [Printables](https://www.printables.com/model/355632-gojiball).

This is starting with the aball electronics, adding 2 switches as direct pins, and making a custom case for it.
Follow brickbots guide for the sensor and micro controller then jump to here to finish it out:

**Additional parts:**
- 2 mouse microswitches. I bought these from [Aliexpress](https://www.aliexpress.us/item/3256802345972562.html?spm=a2g0o.order_detail.order_detail_item.9.3b9bf19cvxvjTy&gatewayAdapt=glo2usa&_randl_shipto=US)
- 4 8mm M2 screws (overkill, but makes it secure)
- 2 6mm M2 screws (8mm works fine too, they just stick up more)
- 4 M2 melt in threaded inserts. I used these from [Aliexpress](https://www.aliexpress.us/item/2255800046543591.html?spm=a2g0o.order_list.order_list_main.19.21ef1802uwQUCH&gatewayAdapt=glo2usa4itemAdapt&_randl_shipto=US)
- 2 M2 nuts
- I used this 34mm trackball from [Amazon](https://www.amazon.com/gp/product/B07BDHK2MR/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1)

If you're buying all these parts new there's definitely ways to consolidate parts used, like the nuts may not be needed if you screw it into the plastic, but I had all these on hand so I didn't really "optimize" the build. Also, I used 8mm M3 screws for the bearings because they screwed into the plastic just fine for my taste.

I generally liked around 0.74N micro switches. Wherever or whatever microswitches you want, go for it.

**Final Assembly:**
1. Print the parts and add the threaded inserts to the "bottom" part 
2. Wire up the sensor electronics as per brickbots guide
3. Connect your 2 switches to pins D1 and D0 with the second lead to GND. You can change which pins you use in the qmk config.h file under DIRECT_PINS.
4. Test fit electronics into the "top" and "bottom" parts. Don't add the bearings yet (the cover doesn't fit if the bearings are installed). I recommend just using 2 of the M2 screws to screw in the top and bottom as you may need to make adjustments for the mouse switches.
5. Test fit the cover. To make sure the buttons work with the switches you may need to adjust either the placement of the switch (push it further out if the switch can't be pressed) or shave off some of the inside stem in the cover (if the switch is always pressed). I used a little chisel to shave off from the stem. 
6. Once the buttons click well, dissasemble a bit so you can access the reset and ground pins, needed to flash the MC
7. Setup your local QMK environment. You can drop the qmk folder "00_oce01" into your local qmk_firmware>keyboards folder. Then continue with standard qmk compiling and flashing using the keyboard name "00_oce01" (and "default" keymap).
8. Once it's all working the final assembly adding the bearings last, after the cover is on.

I had some trouble with the qmk firmware at first, turned out my local qmk repo was really old. This worked for me on qmk repo 0.19.5

**Notes:**
It's not perfect, the 34mm trackball can be pushed out from it's spot if pushed from the wrong angle. Next itteration would likely adjust the "top" file so the arms are spread out a little more. 

Also, the cover only fitting after the bearings are on was a pain for troubleshooting. It makes for a cleaner final product though.

I'm also curious about better bearing setups and if I can get a middle mouse button somewhere cleanly

But overall, I'm really happy with it! Enjoy
