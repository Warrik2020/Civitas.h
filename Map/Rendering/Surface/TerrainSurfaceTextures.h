#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Surface
{
    class TerrainSurfaceTextures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainSurfaceTextures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Surface", "TerrainSurfaceTextures") {}
    public:
        void* Build(void* d) const { void* args[] = { d }; return CallStatic("Build", args, 1); }
        void Bind(void* space, int width, int height) const { void* args[] = { space, &width, &height }; Call("Bind", args, 3); }
        void BindMapXform(void* space) const { void* args[] = { space }; CallStatic("BindMapXform", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        int TerrainTexId() const { return ReadStaticField<int>("TerrainTexId"); }
        int MacroColorId() const { return ReadStaticField<int>("MacroColorId"); }
        int NoiseId() const { return ReadStaticField<int>("NoiseId"); }
        int DetailId() const { return ReadStaticField<int>("DetailId"); }
        int GridId() const { return ReadStaticField<int>("GridId"); }
        int MapXformId() const { return ReadStaticField<int>("MapXformId"); }
        int LayerTintId() const { return ReadStaticField<int>("LayerTintId"); }
        int LayerModeId() const { return ReadStaticField<int>("LayerModeId"); }
        void* DetailResource() const { return ReadStaticField<void*>("DetailResource"); }
    };
}
