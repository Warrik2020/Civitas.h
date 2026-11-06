#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class LineFightRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineFightRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "LineFightRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Draw(void* fight, void* cam, void* toRender, void* cfg, void* selected, void* own, int hover = -1, void* box = nullptr) const { void* __callArgs[] = { fight, cam, toRender, cfg, selected, own, &hover, box }; Call("Draw", __callArgs, 8); }
        int Pick(void* screen) const { void* __callArgs[] = { screen }; return CallValue<int>("Pick", __callArgs, 1); }
        void PickBox(void* min_, void* max_, void* filter, void* into) const { void* __callArgs[] = { min_, max_, filter, into }; Call("PickBox", __callArgs, 4); }
        void* ScreenToMetres(void* screen) const { void* __callArgs[] = { screen }; return Call("ScreenToMetres", __callArgs, 1); }
    };
}
