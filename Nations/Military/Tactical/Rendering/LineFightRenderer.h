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
        void Draw(void* fight, void* cam, void* toRender, void* cfg, void* selected, void* own, int hover = -1, void* box = nullptr) const { void* args[] = { fight, cam, toRender, cfg, selected, own, &hover, box }; Call("Draw", args, 8); }
        int Pick(void* screen) const { void* args[] = { screen }; return CallValue<int>("Pick", args, 1); }
        void PickBox(void* min, void* max, void* filter, void* into) const { void* args[] = { min, max, filter, into }; Call("PickBox", args, 4); }
        void* ScreenToMetres(void* screen) const { void* args[] = { screen }; return Call("ScreenToMetres", args, 1); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* mesh() const { return ReadField<void*>("mesh"); }
        void SetMesh(void* value) const { WriteField<void*>("mesh", value); }
        void* mr() const { return ReadField<void*>("mr"); }
        void SetMr(void* value) const { WriteField<void*>("mr", value); }
        void* data() const { return ReadField<void*>("data"); }
    };
}
