[@react.component]
let make = (~name) => {
    <div>{ReasonReact.string("Game " ++ name)}</div>
};
