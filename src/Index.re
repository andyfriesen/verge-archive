// Entry point

[@bs.val] external document: Js.t({..}) = "document";

let rawhash: string = document##location##hash;
let hash = if (String.length(rawhash) > 0) { Some(String.sub(rawhash, 1, String.length(rawhash) - 1)) } else { None };

switch (hash) {
| None => ()
| Some(h) => print_endline("Hash: " ++ h)
}

ReactDOM.render(
  <App initialGame={hash} />,
  document##body
);
