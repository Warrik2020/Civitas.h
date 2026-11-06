#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsThread : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsThread(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsThread") {}
    public:
        void* Cast(const char* role) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Cast", __callArgs, 1); }
        float Var(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallValue<float>("Var", __callArgs, 1); }
        bool HasVar(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallValue<bool>("HasVar", __callArgs, 1); }
        void SetVar(const char* name, float value) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, &value }; Call("SetVar", __callArgs, 2); }
        void ClearVar(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; Call("ClearVar", __callArgs, 1); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        void* storyId() const { return ReadField<void*>("storyId"); }
        void storyId(void* value) const { WriteField<void*>("storyId", value); }
        int theme() const { return ReadField<int>("theme"); }
        void theme(int value) const { WriteField<int>("theme", value); }
        void* title() const { return ReadField<void*>("title"); }
        void title(void* value) const { WriteField<void*>("title", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int nationBorn() const { return ReadField<int>("nationBorn"); }
        void nationBorn(int value) const { WriteField<int>("nationBorn", value); }
        int openedTick() const { return ReadField<int>("openedTick"); }
        void openedTick(int value) const { WriteField<int>("openedTick", value); }
        int closedTick() const { return ReadField<int>("closedTick"); }
        void closedTick(int value) const { WriteField<int>("closedTick", value); }
        bool open() const { return ReadField<bool>("open"); }
        void open(bool value) const { WriteField<bool>("open", value); }
        void* outcome() const { return ReadField<void*>("outcome"); }
        void outcome(void* value) const { WriteField<void*>("outcome", value); }
        void* stepId() const { return ReadField<void*>("stepId"); }
        void stepId(void* value) const { WriteField<void*>("stepId", value); }
        void* nextStepId() const { return ReadField<void*>("nextStepId"); }
        void nextStepId(void* value) const { WriteField<void*>("nextStepId", value); }
        int dueTick() const { return ReadField<int>("dueTick"); }
        void dueTick(int value) const { WriteField<int>("dueTick", value); }
        int causedBy() const { return ReadField<int>("causedBy"); }
        void causedBy(int value) const { WriteField<int>("causedBy", value); }
        int steps() const { return ReadField<int>("steps"); }
        void steps(int value) const { WriteField<int>("steps", value); }
        int peak() const { return ReadField<int>("peak"); }
        void peak(int value) const { WriteField<int>("peak", value); }
        int linkedArc() const { return ReadField<int>("linkedArc"); }
        void linkedArc(int value) const { WriteField<int>("linkedArc", value); }
        void* causeText() const { return ReadField<void*>("causeText"); }
        void causeText(void* value) const { WriteField<void*>("causeText", value); }
        void* causeFact() const { return ReadField<void*>("causeFact"); }
        void causeFact(void* value) const { WriteField<void*>("causeFact", value); }
        void* cast() const { return ReadField<void*>("cast"); }
        void* vars() const { return ReadField<void*>("vars"); }
        void* log() const { return ReadField<void*>("log"); }
    };
}
