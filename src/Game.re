
type engine = V1 | V2;

type game = {
    name: string,
    title: string,
    description: string,
    engine: engine,
    vtype: string
};

let supports_audioworklet: bool = [%raw {|
    function() {
        return !!('audioWorklet' in AudioContext.prototype);
    }
|}]();

let go_fullscreen = [%raw {|
    function() {
        if (!document.fullscreenElement) {
            const canvas = document.querySelector('.game .frame').contentDocument.querySelector('#vergeCanvas').requestFullscreen();
        } else {
            if (document.exitFullscreen) {
                document.exitFullscreen();
            }
        }
    }
|}];

[@react.component]
let make = (~game) => {
    let url = switch (game.engine) {
    | V1 => "game.html?game=" ++ game.name
    | V2 => "game2.html?game=" ++ game.name
    };

    let s = React.string;

    <div className="game">
        <header>
            {s(game.title)}
        </header>
        <p className="description">
            {s(game.description)}
        </p>
        <iframe className="frame" src={url} />

        <div className="controls">
            <h2>{s("Controls")}</h2>
            <dl>
                <dt>{s("Arrow keys")}</dt><dd>{s("Move")}</dd>
                <dt>{s("Enter")}</dt><dd>{s("Interact, select menu options")}</dd>
                <dt>{s("Tab")}</dt><dd>{s("Cancel out of menus")}</dd>
                <dt>{s("Space")}</dt><dd>{s("Main menu (items, equipment, etc)")}</dd>
                <dt>{s("ESC")}</dt><dd>{s("System menu (save, load, etc)")}</dd>
            </dl>
            <h2>{s("Gamepad Controls")}</h2>
            <dl>
                <dt>{s("A")}</dt><dd>{s("Interact")}</dd>
                <dt>{s("B")}</dt><dd>{s("Cancel")}</dd>
                <dt>{s("Y")}</dt><dd>{s("Main menu")}</dd>
                <dt>{s("Start")}</dt><dd>{s("System Menu")}</dd>
            </dl>
            {
                if (supports_audioworklet) {
                    <span />
                } else {
                    <div>
                        {s("Your browser does not support AudioWorklet.  We cannot play any music.  Sorry!")}<br />
                        {s("The latest versions of Chrome and Firefox should work!")}
                    </div>
                }
            }
            <button id="fullscreenButton" onClick={go_fullscreen}>{s("FULLSCREEN")}</button>
        </div>
    </div>
};
