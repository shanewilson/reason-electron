[%bs.raw {|require('./index.css')|}];

external register_service_worker : unit => unit = "" [@@bs.module "./registerServiceWorker"];

ReactDOMRe.renderToElementWithId <App message="WWelcome to React and Reason" /> "root";