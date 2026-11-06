#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class PlanLines : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlanLines(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "PlanLines") {}
    public:
        void Simplify(void* pts, int maxPoints, void* into) const { void* args[] = { pts, &maxPoints, into }; CallStatic("Simplify", args, 3); }
        void Curve(void* controls, float step, void* into) const { void* args[] = { controls, &step, into }; CallStatic("Curve", args, 3); }
        float Length(void* pts) const { void* args[] = { pts }; return CallStaticValue<float>("Length", args, 1); }
        void* PointAt(void* pts, float s, void* dir) const { void* args[] = { pts, &s, &dir }; return CallStatic("PointAt", args, 3); }
        float Project(void* pts, void* p, float& distSq) const { void* args[] = { pts, p, &distSq }; return CallStaticValue<float>("Project", args, 3); }
        int MaxControls() const { return ReadStaticField<int>("MaxControls"); }
        float MinLengthTiles() const { return ReadStaticField<float>("MinLengthTiles"); }
        float CurveStep() const { return ReadStaticField<float>("CurveStep"); }
    };
}
