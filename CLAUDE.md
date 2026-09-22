# PhoenixChannelsClient bundle

iOS distribution repo for `PhoenixChannelsClient`: holds the built XCFramework
and the podspec that points at it. The framework is produced elsewhere — this
repo publishes it, it does not build it. Consumed by `ios-sdk` and
`ios-sdk-widgets`.

## Platform Services

> Read by Glia's engineering knowledge base and review bots. Update it when a
> dependency is added or removed.

This repo reaches no Glia backend service — it ships a binary. The Glia
library it distributes:

| Library | Role |
|---------|------|
| `phoenix-channels-kmm-client` | Kotlin Multiplatform Phoenix Channels client; source of the XCFramework published here |
