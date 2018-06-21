let component = ReasonReact.statelessComponent("Dashboard");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <Link href="/">(ReasonReact.string("Home"))</Link>
    </div>
};
