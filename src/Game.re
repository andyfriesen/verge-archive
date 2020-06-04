
type game = {
    name: string,
    title: string,
    description: string
};

[@react.component]
let make = (~game) => {
    let url = "game.html?game=" ++ game.name;       

    <>
        <div className="header-style" >
        <br />
        {ReasonReact.string(game.title)}
        </div>
        <iframe
            className="game-frame"
            src={url}
        />
        <div className="footer-style" >

        {ReasonReact.string(game.description)}
        </div>
    </>
};
