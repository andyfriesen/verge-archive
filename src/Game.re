
type game = {
    name: string,
};

[@react.component]
let make = (~game) => {
    <div>{ReasonReact.string("Game " ++ game.name)}</div>
};
