#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Surface
{
    class RiverRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RiverRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Surface", "RiverRenderer") {}
    public:
        void* Read(void* map) const { void* args[] = { map }; return CallStatic("Read", args, 1); }
        void* TryBuild(void* map, void* parent, float z) const { void* args[] = { map, parent, &z }; return CallStatic("TryBuild", args, 3); }
        void SetVisible(bool on) const { void* args[] = { &on }; Call("SetVisible", args, 1); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void SetZoom(float pixelsPerTile) const { void* args[] = { &pixelsPerTile }; Call("SetZoom", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        int SourceStart() const { return ReadStaticField<int>("SourceStart"); }
        int SourceEnd() const { return ReadStaticField<int>("SourceEnd"); }
        int FlowKnown() const { return ReadStaticField<int>("FlowKnown"); }
        void* Points() const { return ReadField<void*>("Points"); }
        float Width() const { return ReadField<float>("Width"); }
        int Flags() const { return ReadField<int>("Flags"); }
    };
}
