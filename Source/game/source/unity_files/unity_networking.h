/**
 * The OpenIsolation Project
 */

#pragma once

/// Seems live link used to use the game's old networking code, most likely to connect to CAGE.
namespace LiveLinkProxy {
    /// The IP address of the computer running CAGE.
    const char* ipaddress;
    /// Whether or not the level has finished loading.
    bool m_load_complete;
}
