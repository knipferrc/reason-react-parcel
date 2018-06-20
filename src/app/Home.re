let component = ReasonReact.statelessComponent("Home");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <Link href="dashboard"> (ReasonReact.string("Dashboard")) </Link>
    </div>
};
