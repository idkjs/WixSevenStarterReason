# Reproduction of error for [issue](https://github.com/wix/react-native-navigation/issues/6684)

## 📚 Documentation

The doc instructions for installing and running the next branch produces `AppRegistry.registerComponent` wasn't called.

### Have you read the [Contributing Guidelines on issues](https://wix.github.io/react-native-navigation/docs/meta-contributing)? Yes

### Reproduction

1. create project with `npx react-native init WixSevenStarter`
2. Test project by running `react-native run-ios` and project works.
3. Add `react-native-navigation` with `yarn add react-native-navigation`
4. Run `npx rnn-link`
5. Update `index.js` per [docs](https://wix.github.io/react-native-navigation/next/docs/installing#update-indexjs-file) to :

```js
import { Navigation } from "react-native-navigation";
import App from './App';
// import {name as appName} from './app.json';

// AppRegistry.registerComponent(appName, () => App);
Navigation.registerComponent('com.myApp.WelcomeScreen', () => App);
Navigation.events().registerAppLaunchedListener(() => {
   Navigation.setRoot({
     root: {
       stack: {
         children: [
           {
             component: {
               name: 'com.myApp.WelcomeScreen'
             }
           }
         ]
       }
     }
  });
});
```

6. Run `yarn start --reset-cache`


Output is:
```sh
~/Downloads/WixSevenStarter wix-nav 30s
❯ yarn start --reset-cache
yarn run v1.22.5
$ react-native start --reset-cache

               ######                ######
             ###     ####        ####     ###
            ##          ###    ###          ##
            ##             ####             ##
            ##             ####             ##
            ##           ##    ##           ##
            ##         ###      ###         ##
             ##  ########################  ##
          ######    ###            ###    ######
      ###     ##    ##              ##    ##     ###
   ###         ## ###      ####      ### ##         ###
  ##           ####      ########      ####           ##
 ##             ###     ##########     ###             ##
  ##           ####      ########      ####           ##
   ###         ## ###      ####      ### ##         ###
      ###     ##    ##              ##    ##     ###
          ######    ###            ###    ######
             ##  ########################  ##
            ##         ###      ###         ##
            ##           ##    ##           ##
            ##             ####             ##
            ##             ####             ##
            ##          ###    ###          ##
             ###     ####        ####     ###
               ######                ######

warning: the transform cache was reset.
                 Welcome to React Native!
                Learn once, write anywhere



To reload the app press "r"
To open developer menu press "d"

[Sun Oct 18 2020 15:42:14.273]  BUNDLE  ./index.js

[Sun Oct 18 2020 15:43:00.280]  LOG      Running "WixSevenStarter" with {"rootTag":1,"initialProps":{}}
[Sun Oct 18 2020 15:43:00.300]  ERROR    Invariant Violation: "WixSevenStarter" has not been registered. This can happen if:
* Metro (the local dev server) is run from the wrong folder. Check if Metro is running, stop it and restart it in the current project.
* A module failed to load due to an error and `AppRegistry.registerComponent` wasn't called.
```
Have I missed something?

Update see https://github.com/wix/react-native-navigation/issues/6684#issuecomment-711951603