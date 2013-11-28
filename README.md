### Updated 11/28/2013:
### Inspired by https://raw.github.com/dianaliu/NotificationEx
- To install, `cordova plugin add https://github.com/bormansquirrel/WaitingDialog.git`
  - Oh, but ya know sometimes things get out of sync so you have to re-add the ios platform. Thank you [SO] (http://stackoverflow.com/a/19733423)!
  ```bash

    #!/bin/bash
    echo "Killing xcode..."
    kill $(ps aux | grep 'Xcode' | awk '{print $2}')
    rm -r platforms/ios
    rm plugins/ios.json
    cordova platforms add ios
    cordova build ios
    open platforms/ios/*.xcodeproj
  ``` 

- To remove, `cordova plugin rm org.apache.cordova.plugins.WaitingDialog`
# Waiting dialog for iOS applications

_Created by `Guido Sabatini`_

Creates a modal dialog to give a waiting feedback to users
You can only show and dismiss the dialog, it will block user interactions. You can set the text appearing in the dialog

**NOTE:** this is not a progress dialog, you can not show progress

    // To SHOW a modal waiting dialog
    window.plugins.waitingDialog.show("Your dialog text");

    // To HIDE the dialog
    window.plugins.waitingDialog.hide();
    
If you want to show a waiting dialog for a certain amount of time, you can use javascript setTimeout

	// show dialog
	window.plugins.waitingDialog.show("Your dialog text");
	// automatically hide dialog after 5 seconds
	setTimeout(function() {window.plugins.waitingDialog.hide();}, 5000);
