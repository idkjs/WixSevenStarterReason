type props('a) = 'a;
type imageRequireSource;

[@bs.deriving abstract]
type waitForRender = {
  [@bs.optional]
  waitForRender: bool,
};
[@bs.deriving abstract]
type optionsAnimations = {
  [@bs.optional]
  setStackRoot: waitForRender,
  [@bs.optional]
  setRoot: waitForRender,
  [@bs.optional]
  push: waitForRender,
  [@bs.optional]
  pop: waitForRender,
  [@bs.optional]
  showModal: waitForRender,
  [@bs.optional]
  dismissModal: waitForRender,
};
[@bs.deriving abstract]
type optionsLayout = {
  [@bs.optional]
  backgroundColor: string,
  [@bs.optional]
  componentBackgroundColor: string,
};

type optionsTopBarTitleComponent;

[@bs.obj]
external optionsTopBarTitleComponent:
  (
    ~id: string=?,
    ~name: string=?,
    ~alignment: [ | `center | `fill]=?,
    ~passProps: props('a)=?,
    unit
  ) =>
  optionsTopBarTitleComponent;

[@bs.deriving abstract]
type optionsTopBarTitle = {
  [@bs.optional]
  text: string,
  [@bs.optional]
  fontSize: float,
  [@bs.optional]
  color: ReactNative.Color.t,
  [@bs.optional]
  fontFamily: string,
  [@bs.optional]
  height: float,
  [@bs.optional]
  alignment: string,
  [@bs.optional]
  component: optionsTopBarTitleComponent,
  [@bs.optional]
  padLeft: bool,
};
type optionsTopBarSubTitle;

type optionsTopBarBackButton;
[@bs.obj]
external optionsTopBarBackButton:
  (
    ~icon: imageRequireSource=?,
    ~visible: bool=?,
    ~title: string=?,
    ~showTitle: bool=?,
    ~color: ReactNative.Color.t=?,
    unit
  ) =>
  optionsTopBarBackButton;

[@bs.deriving abstract]
type optionsTopBarBackground = {
  [@bs.optional]
  color: ReactNative.Color.t,
  [@bs.optional]
  clipToBounds: bool,
  [@bs.optional]
  translucent: bool,
  [@bs.optional]
  blur: bool,
};

type iconInsets = {
  top: float,
  left: float,
  bottom: float,
  right: float,
};

type optionsTopBarButton;

[@bs.obj]
external optionsTopBarButton:
  (
    ~id: string=?,
    ~icon: imageRequireSource=?,
    ~systemItem: [@bs.string] [
                   | [@bs.as "done"] `done_
                   | `cancel
                   | `edit
                   | `save
                   | `add
                   | `flexibleSpace
                   | `fixedSpace
                   | `compose
                   | `reply
                   | `action
                   | `organize
                   | `bookmarks
                   | `search
                   | `refresh
                   | `stop
                   | `camera
                   | `trash
                   | `play
                   | `pause
                   | `rewind
                   | `fastForward
                   | `undo
                   | `redo
                 ]
                   =?,
    ~text: string=?,
    ~fontFamily: string=?,
    ~enabled: bool=?,
    ~disableIconTint: bool=?,
    ~color: ReactNative.Color.t=?,
    ~disabledColor: ReactNative.Color.t=?,
    ~testID: string=?,
    ~showAsAction: string=?,
    ~iconInsets: iconInsets=?,
    unit
  ) =>
  optionsTopBarButton;

[@bs.deriving abstract]
type optionsTopBarLargeTitle = {
  [@bs.optional]
  visible: bool,
  [@bs.optional]
  fontSize: float,
  [@bs.optional]
  color: ReactNative.Color.t,
  [@bs.optional]
  fontFamily: string,
  [@bs.optional]
  fontWeight: string,
};
type androidDensityNumber = float;

[@bs.deriving abstract]
type optionsTopBar = {
  [@bs.optional]
  visible: bool,
  [@bs.optional]
  animate: bool,
  [@bs.optional]
  hideOnScroll: bool,
  [@bs.optional]
  leftButtonColor: ReactNative.Color.t,
  [@bs.optional]
  rightButtonColor: ReactNative.Color.t,
  [@bs.optional]
  leftButtonDisabledColor: ReactNative.Color.t,
  [@bs.optional]
  rightButtonDisabledColor: ReactNative.Color.t,
  [@bs.optional]
  drawBehind: bool,
  [@bs.optional]
  testID: string,
  [@bs.optional]
  title: optionsTopBarTitle,
  [@bs.optional]
  subTitle: optionsTopBarSubTitle,
  [@bs.optional]
  backButton: optionsTopBarBackButton,
  [@bs.optional]
  leftButtons: array(optionsTopBarButton),
  [@bs.optional]
  rightButtons: array(optionsTopBarButton),
  [@bs.optional]
  background: optionsTopBarBackground,
  [@bs.optional]
  barStyle: string,
  [@bs.optional]
  noBorder: bool,
  [@bs.optional]
  searchBar: bool,
  [@bs.optional]
  searchBarHiddenWhenScrolling: bool,
  [@bs.optional]
  searchBarPlaceholder: string,
  [@bs.optional]
  hideNavBarOnFocusSearchBar: bool,
  [@bs.optional]
  largeTitle: optionsTopBarLargeTitle,
  [@bs.optional]
  height: androidDensityNumber,
  [@bs.optional]
  borderColor: ReactNative.Color.t,
  [@bs.optional]
  borderHeight: androidDensityNumber,
  [@bs.optional]
  elevation: androidDensityNumber,
  [@bs.optional]
  topMargin: float,
  [@bs.optional]
  transparent: bool,
};

type optionsOverlay;
[@bs.obj]
external optionsOverlay:
  (~interceptTouchOutside: bool=?, ~handleKeyboardEvents: bool=?, unit) =>
  optionsOverlay;
[@bs.deriving abstract]
type optionsBottomTabs = {
  [@bs.optional]
  text: string,
  [@bs.optional]
  fontSize: float,
  [@bs.optional]
  selectedFontSize: float,
  [@bs.optional]
  icon: imageRequireSource,
  [@bs.optional]
  visible: bool,
  [@bs.optional]
  animate: bool,
  [@bs.optional]
  hideOnScroll: bool,
  [@bs.optional]
  leftButtonColor: ReactNative.Color.t,
  [@bs.optional]
  rightButtonColor: ReactNative.Color.t,
  [@bs.optional]
  leftButtonDisabledColor: ReactNative.Color.t,
  [@bs.optional]
  rightButtonDisabledColor: ReactNative.Color.t,
  [@bs.optional]
  drawBehind: bool,
  [@bs.optional]
  testID: string,
  [@bs.optional]
  title: optionsTopBarTitle,
  [@bs.optional]
  subTitle: optionsTopBarSubTitle,
  [@bs.optional]
  backButton: optionsTopBarBackButton,
  [@bs.optional]
  leftButtons: array(optionsTopBarButton),
  [@bs.optional]
  rightButtons: array(optionsTopBarButton),
  [@bs.optional]
  background: optionsTopBarBackground,
  [@bs.optional]
  barStyle: string,
  [@bs.optional]
  noBorder: bool,
  [@bs.optional]
  searchBar: bool,
  [@bs.optional]
  searchBarHiddenWhenScrolling: bool,
  [@bs.optional]
  hideNavBarOnFocusSearchBar: bool,
  [@bs.optional]
  largeTitle: optionsTopBarLargeTitle,
  [@bs.optional]
  height: androidDensityNumber,
  [@bs.optional]
  borderColor: ReactNative.Color.t,
  [@bs.optional]
  borderHeight: androidDensityNumber,
  [@bs.optional]
  elevation: androidDensityNumber,
  [@bs.optional]
  topMargin: float,
};
type navigationOptions;
[@bs.obj]
external navigationOptions:
  (
    ~layout: optionsLayout=?,
    ~topBar: optionsTopBar=?,
    ~overlay: optionsOverlay=?,
    ~animations: optionsAnimations=?,
    ~bottomTab: optionsBottomTabs=?,
    unit
  ) =>
  navigationOptions;

type layoutComponent;
[@bs.obj]
external layoutComponent:
  (
    ~id: string=?,
    ~name: Screens.t=?,
    ~options: navigationOptions=?,
    ~passProps: props('a)=?,
    unit
  ) =>
  layoutComponent;

type layoutStackChildren;
[@bs.obj]
external layoutStackChildren:
  (~component: layoutComponent=?) => layoutStackChildren;

type layoutStack;
[@bs.obj]
external layoutStack:
  (
    ~id: string=?,
    ~children: array(layoutStackChildren),
    ~options: navigationOptions=?,
    unit
  ) =>
  layoutStack;

[@bs.deriving abstract]
type layout('p) = {
  [@bs.optional]
  component: layoutComponent,
  [@bs.optional]
  stack: layoutStack,
};
[@bs.deriving abstract]
type optionsStack = {
  [@bs.optional]
  animations: optionsAnimations,
  [@bs.optional]
  layout: optionsLayout,
  [@bs.optional]
  topBar: optionsTopBar,
};
type optionsModalPresentationStyle = [
  | `formSheet
  | `pageSheet
  | `overFullScreen
  | `overCurrentContext
  | `overCurrentContext
  | `currentContext
  | `popover
  | `fullScreen
  | `none
];
type optionsDefault = {
  modalPresentationStyle: option(optionsModalPresentationStyle),
  animations: option(optionsAnimations),
  modalInPresentation: bool,
};
[@bs.deriving abstract]
type optionsBottomTab = {
  [@bs.optional]
  text: string,
  [@bs.optional]
  fontSize: float,
  [@bs.optional]
  selectedFontSize: float,
};
[@bs.deriving abstract]
type optionsStatusBar = {
  [@bs.optional]
  backgroundColor: string,
};

type defaultOptions;
[@bs.obj]
external defaultOptions:
  (
    ~statusBar: optionsStatusBar=?,
    ~topBar: optionsTopBar=?,
    ~bottomTab: optionsBottomTab=?,
    unit
  ) =>
  defaultOptions;

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setDefaultOptions: defaultOptions => unit = "setDefaultOptions";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external showOverlay: layout('a) => unit = "showOverlay";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external dismissOverlay: string => unit = "dismissOverlay";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external showModal: layout('a) => unit = "showModal";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external pop: string => unit = "pop";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external push: (string, layout('a)) => unit = "push";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external pushChild: (string, layoutStackChildren) => unit = "push";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external dismissModal: string => unit = "dismissModal";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external dismissAllModals: unit => Promise.t(unit) = "dismissAllModals";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external popToRoot: string => unit = "popToRoot";

[@bs.deriving abstract]
type optionsBottomStack = {
  [@bs.optional]
  id: string,
  [@bs.optional]
  children: array(layoutStackChildren),
  [@bs.optional]
  options: navigationOptions,
};

[@bs.deriving abstract]
type stackOptions = {
  [@bs.optional]
  stack: layoutStack,
  [@bs.optional]
  bottomTabs:optionsBottomStack,

};
[@bs.deriving abstract]
type rootOptions = {
  [@bs.optional]
  root: stackOptions,
};

type componentProvider('a) = unit => React.component('a);

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external registerScreen: (Screens.t, 'a) => React.element = "registerComponent";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external registerComponent2: ('a, React.component('a)) => componentProvider('a) => unit =
  "registerComponent";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external registerComponent: (string, 'a) => React.element = "registerComponent";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setRoot: 'a => Js.Promise.t(unit) = "setRoot";
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setRootOptions: rootOptions => Js.Promise.t(unit) = "setRoot";


/* EVENTS */
type events;
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external events: unit => events = "events";

[@bs.send]
external _registerAppLaunchedListener: (events, unit => unit) => unit =
  "registerAppLaunchedListener";

let onAppLaunched = (f: unit => unit) =>
  events()->_registerAppLaunchedListener(f);

