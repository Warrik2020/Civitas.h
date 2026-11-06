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
        void Build(void* raw, bool isClosed, int passes, float step) const { void* __callArgs[] = { raw, &isClosed, &passes, &step }; Call("Build", __callArgs, 4); }
        void* PointAt(float s) const { void* __callArgs[] = { &s }; return Call("PointAt", __callArgs, 1); }
        void* TangentAt(float s, float window) const { void* __callArgs[] = { &s, &window }; return Call("TangentAt", __callArgs, 2); }
        float Project(void* p, float& distSq) const { void* __callArgs[] = { p, &distSq }; return CallValue<float>("Project", __callArgs, 2); }
        float ProjectSegment(int i, void* p, float& distSq) const { void* __callArgs[] = { &i, p, &distSq }; return CallValue<float>("ProjectSegment", __callArgs, 3); }
        float Wrap(float s) const { void* __callArgs[] = { &s }; return CallValue<float>("Wrap", __callArgs, 1); }
        void* pts() const { return ReadField<void*>("pts"); }
        void* arc() const { return ReadField<void*>("arc"); }
        bool closed() const { return ReadField<bool>("closed"); }
        void closed(bool value) const { WriteField<bool>("closed", value); }
    };
}
