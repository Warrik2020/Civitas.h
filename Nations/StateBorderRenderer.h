#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class StateBorderRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateBorderRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "StateBorderRenderer") {}
    public:
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void SetZoomFade(float alpha) const { void* __callArgs[] = { &alpha }; Call("SetZoomFade", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void Sync(void* grid, void* stateStyle, void* historicStyle) const { void* __callArgs[] = { grid, stateStyle, historicStyle }; Call("Sync", __callArgs, 3); }
    };
}
