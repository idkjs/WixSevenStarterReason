let register = ()=>Screens.screens->Js.Array2.forEach(s => {
  Js.log("Start Registering Screens");
  let register = c => Navigation.registerScreen(s,() => c);
  Js.log2("Registering Screen: ", s);
  switch (s) {
  // screens
  | `Demo_Home => Home.make->register |> ignore
  | `Demo_AuthenticatedApp => AuthenticatedApp.make->register |> ignore
  | `Demo_UnAuthenticatedApp => UnAuthenticatedApp.make->register |> ignore
  };
});
