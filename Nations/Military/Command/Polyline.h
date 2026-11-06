#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class Polyline : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Polyline(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "Polyline") {}
    public:
        void Build(void* raw, bool isClosed, int passes, float step) const { void* args[] = { raw, &isClosed, &passes, &step }; Call("Build", args, 4); }
        void* PointAt(float s) const { void* args[] = { &s }; return Call("PointAt", args, 1); }
        void* TangentAt(float s, float window) const { void* args[] = { &s, &window }; return Call("TangentAt", args, 2); }
        float Project(void* p, float& distSq) const { void* args[] = { p, &distSq }; return CallValue<float>("Project", args, 2); }
        float ProjectSegment(int i, void* p, float& distSq) const { void* args[] = { &i, p, &distSq }; return CallValue<float>("ProjectSegment", args, 3); }
        float Wrap(float s) const { void* args[] = { &s }; return CallValue<float>("Wrap", args, 1); }
        void* pts() const { return ReadField<void*>("pts"); }
        void* arc() const { return ReadField<void*>("arc"); }
        bool closed() const { return ReadField<bool>("closed"); }
        void SetClosed(bool value) const { WriteField<bool>("closed", value); }
    };
}
