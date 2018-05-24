open Utils;

requireCSS("./App.css");

let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: _self =>
    <h1 className="title">(ReasonReact.string("Welcome to ReasonReact-Parcel"))</h1>
};
