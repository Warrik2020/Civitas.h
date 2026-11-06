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
        void* PhaseName(int i) const { void* __callArgs[] = { &i }; return CallStatic("PhaseName", __callArgs, 1); }
        double PhaseMs(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<double>("PhaseMs", __callArgs, 1); }
        void* Find(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Find", __callArgs, 1); }
        void Zero() const { CallStatic("Zero", nullptr, 0); }
        void ResetLastOpened() const { CallStatic("ResetLastOpened", nullptr, 0); }
        void SuspendScopesAbove(int depth, void* into) const { void* __callArgs[] = { &depth, into }; CallStatic("SuspendScopesAbove", __callArgs, 2); }
        void ResumeScopes(void* scopes) const { void* __callArgs[] = { scopes }; CallStatic("ResumeScopes", __callArgs, 1); }
        void ResetFrame() const { CallStatic("ResetFrame", nullptr, 0); }
        void NoteSettle(const char* why, double ms) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* __callArgs[] = { managed_0, &ms }; CallStatic("NoteSettle", __callArgs, 2); }
        void* TopCause(double frameMs, double& causeMs) const { void* __callArgs[] = { &frameMs, &causeMs }; return CallStatic("TopCause", __callArgs, 2); }
        void* Summarize(float frameMs, bool& quiet, double minMs = 0.1, double quietMinMs = 0.0) const { void* __callArgs[] = { &frameMs, &quiet, &minMs, &quietMinMs }; return CallStatic("Summarize", __callArgs, 4); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        void* ScaleLabel() const { return ReadStaticField<void*>("ScaleLabel"); }
        void ScaleLabel(void* value) const { WriteStaticField<void*>("ScaleLabel", value); }
        int ScaleValue() const { return ReadStaticField<int>("ScaleValue"); }
        void ScaleValue(int value) const { WriteStaticField<int>("ScaleValue", value); }
    };
}
