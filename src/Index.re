let options =
  Navigation.navigationOptions(
    ~animations=
      Navigation.optionsAnimations(
        ~setRoot=Navigation.waitForRender(~waitForRender=true, ()),
        (),
      ),
    (),
  );
let welcomeScreen: Navigation.layoutStackChildren =
  Navigation.(
    layoutStackChildren(
      ~component=Navigation.layoutComponent(~name=`Demo_Home, ~options, ()),
    )
  );

let root =
  Navigation.(
    rootOptions(
      ~root=
        stackOptions(
          ~stack=
            layoutStack(
              ~children=[|welcomeScreen|],
              ~options=
                navigationOptions(
                  ~animations=
                    optionsAnimations(
                      ~setRoot=waitForRender(~waitForRender=true, ()),
                      (),
                    ),
                  (),
                ),
              (),
            ),
          (),
        ),
      (),
    )
  );
RegisterScreens.register()
// Navigation.registerComponent("com.myApp.WelcomeScreen", () => App.app);
// Navigation.registerScreen(`Demo_Home, () => Home.make);
Navigation.onAppLaunched(() => {
  SetDefaultOptions.setDefaultOptions();
  Navigation.setRoot(root)->ignore;
});
