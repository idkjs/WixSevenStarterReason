

let welcomeScreen: Navigation.layoutStackChildren =
  Navigation.(
    layoutStackChildren(
      ~component=
        layoutComponent(
          ~name="com.myApp.WelcomeScreen",
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

Navigation.registerComponent("com.myApp.WelcomeScreen", () => App.app);
Navigation.onAppLaunched(() => Navigation.setRoot(root)->ignore);
