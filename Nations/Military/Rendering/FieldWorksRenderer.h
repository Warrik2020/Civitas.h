#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class FieldWorksRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldWorksRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "FieldWorksRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Sync(void* works, void* cam) const { void* __callArgs[] = { works, cam }; Call("Sync", __callArgs, 2); }
        float HideTilePx() const { return ReadStaticField<float>("HideTilePx"); }
        float FullTilePx() const { return ReadStaticField<float>("FullTilePx"); }
        float CraterTilePx() const { return ReadStaticField<float>("CraterTilePx"); }
    };
}
