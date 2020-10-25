let setDefaultOptions = () =>
  Navigation.setDefaultOptions(
    Navigation.defaultOptions(
      ~statusBar=Navigation.optionsStatusBar(~backgroundColor="#4d089a", ()),
      ~topBar=
        Navigation.optionsTopBar(
          ~title=Navigation.optionsTopBarTitle(~color="white", ()),
          ~backButton=Navigation.optionsTopBarBackButton(~color="white", ()),
          ~background=
            Navigation.optionsTopBarBackground(~color="#4d089a", ()),
          (),
        ),
      (),
    ),
  );
