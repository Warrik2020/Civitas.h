#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class SimPhase : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SimPhase(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "SimPhase") {}
    public:
        void* Auto_() const { return Call("Auto", nullptr, 0); }
        void* PhaseName(int i) const { void* args[] = { &i }; return CallStatic("PhaseName", args, 1); }
        double PhaseMs(int i) const { void* args[] = { &i }; return CallStaticValue<double>("PhaseMs", args, 1); }
        void* Find(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Find", args, 1); }
        void Zero() const { CallStatic("Zero", nullptr, 0); }
        void ResetLastOpened() const { CallStatic("ResetLastOpened", nullptr, 0); }
        void SuspendScopesAbove(int depth, void* into) const { void* args[] = { &depth, into }; CallStatic("SuspendScopesAbove", args, 2); }
        void ResumeScopes(void* scopes) const { void* args[] = { scopes }; CallStatic("ResumeScopes", args, 1); }
        void ResetFrame() const { CallStatic("ResetFrame", nullptr, 0); }
        void NoteSettle(const char* why, double ms) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* args[] = { managed_0, &ms }; CallStatic("NoteSettle", args, 2); }
        void* TopCause(double frameMs, double& causeMs) const { void* args[] = { &frameMs, &causeMs }; return CallStatic("TopCause", args, 2); }
        void* Summarize(float frameMs, bool& quiet, double minMs, double quietMinMs) const { void* args[] = { &frameMs, &quiet, &minMs, &quietMinMs }; return CallStatic("Summarize", args, 4); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        void* ScaleLabel() const { return ReadStaticField<void*>("ScaleLabel"); }
        void SetScaleLabel(void* value) const { WriteStaticField<void*>("ScaleLabel", value); }
        int ScaleValue() const { return ReadStaticField<int>("ScaleValue"); }
        void SetScaleValue(int value) const { WriteStaticField<int>("ScaleValue", value); }
    };
}
