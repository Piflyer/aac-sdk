## ChangeLog

___

### v1.0.2 released on 2018-08-08:

### Enhancements

This release is only for documentation updates. There are no new features or enhancements.

### Resolved Issues

Only name change updates were made to the documentation. There are no resolved issues in this release.

### Known Issues

There are no known issues in this release.

### v1.0.1 released on 2018-07-31:

### Enhancements

This release is for bug fixes only. There are no new features or enhancements.

### Resolved Issues

Issues fixed in this release:

* The Engine now reconnects to Alexa when the `NetworkInfoProvider` updates the network status.
* All shared memory objects are now freed when the Engine object is disposed.
* We fixed a media playback state issue in the Engine that caused an unexpected pause and resume for a media stream that was already stopped.
* We added AudioPlayer::playerActivityChanged to the Android APIs.
* Updated the `AuthError` enumeration with additional error types.
* Removed deprecated `createAuthConfig()` configuration method.
* Fixed issue in the JNI where trying to create a UTF-8 string with invalid characters caused a crash, seen when sensitive logging is enabled.
* Improved JNI thread handling.
* Enabled capability registration for phone call control.
* We fixed an issue where the Android platform build failed on the initial attempt when using clean code.

### Known Issues

There are no known issues in this release.

### **v1.0.0**

* v1.0.0 released on 2018-06-29
* Support for phone control APIs
* Support for CancelNavigation() in the Navigation API
* Support for Amazon Wake Word Engine (WWE)

### **Enhancements**

The following enhancements were added to the Alexa Auto SDK since the v1.0.0 Beta release.
* Alexa Auto SDK now supports 2 Navigation directives.
    * **`SetDestination`**
    * **`CancelNavigation`**
* For Phone Control we now support the Dial Directive with three events.
    * **`CallActivated`**
    * **`CallTerminated`**
    * **`CallFailed`**

### **Known Issues**

The following are know issues in this release.

* The Engine doesn't immediately reconnect to AVS when the **`NetworkInfoProvider`** updates network status.
* Some shared memory objects are not freed when Engine object is disposed.

Sample App issues are documented in the [Sample App README](./samples/android/README.md).

### **v1.0.0 Beta**

* v1.0.0 Beta released on 2018-04-29

### **Enhancements**

The following enhancements were added to the Alexa Auto SDK since the last Alpha release (binary).

 * `SetDestination()` API added to the Navigation module (see the [Modules](./README.md) sections in the "Alexa Auto SDK" readme.)
 * Android Sample Application updated with a number of features such as rendering of Display Cards (Shopping List, Coffee Shops Nearby, etc), handling of the `SetDestination()` API, Notifications, LWA (Login with Amazon)

### **Known Issues**

***SDK:***

* While the SDK does build against Android API22 and above and runs successfully on Android O devices, our current testing shows a native-code linking error when actually running on API22 devices.

***Android Sample App:***

* M3U and PLS based stream URLs are not parsed before sent to the Android Mediaplayer. Affects live streams typically coming from TuneIn and IHeartRadio services
* Media playback can take a long time to start sometimes for iHeartRadio and TuneIn
* The Android Alexa Auto SDK Sample App was developed on an Android tablet with 2048 x 1536 resolution screen size. It can run on smaller devices, but some of the display cards may not display correctly
* During Playing Media in the Sample App we see the following messages (none of these will cause any issues):
  * E/AVS:JsonUtils:findNodeFailed:reason=missingDirectChild,child=streamFormat
  * E/AVS:JsonUtils:findNodeFailed:reason=missingDirectChild,child=progressReportDelayInMilliseconds
  * E/AVS:JsonUtils:findNodeFailed:reason=missingDirectChild,child=expectedPreviousToken
  * E/AAC:aace.alexa.AudioChannelEngineImpl:validateSource:reason=invalidSource
  * E/AAC:aace.alexa.AudioChannelEngineImpl:pause:reason=invalidSource,expectedState=X
* On App startup we see the following messages (none of these will cause any issues):
   * E/AVS:SQLiteAlertStorage:openFailed::File specified does not exist.:file path=/data/user/0/com.amazon.sampleapp/cache/appdata/alerts.sqlite
* Several minor documentation issues which will be address in the GA release
