
type game = {
    name: string,
};

[@react.component]
let make = (~game) => {
    let url = "://game.html?game=" ++ game.name;
    <iframe
        src={url}
        style={
            ReactDOMRe.Style.make(
                ~flexGrow="1",
                ()
            )
        }
    />
};
