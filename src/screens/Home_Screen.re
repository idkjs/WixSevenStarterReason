
let id = "Home";
let name = `Demo_Home;

let screen = () => {

  Navigation.(
    layoutStackChildren(
      ~component=
        layoutComponent(
          ~id,
          ~name,
          ~options=
            navigationOptions(
         
              ~topBar=
                optionsTopBar(
                  ~visible=true,
                  ~elevation=0.,
                  ~drawBehind=true,
                  ~noBorder=true,
                  ~background=
                    optionsTopBarBackground(~color="transparent", ()),
                  ~backButton=
                    optionsTopBarBackButton(
                      ~showTitle=false,
               
                      (),
                    ),
                  (),
                ),
              (),
            ),
          (),
        ),
    )
  );
};

let push = () => {
  Navigation.pushChild("HomeStack", screen());
};
