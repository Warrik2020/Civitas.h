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
        void* Cast(const char* role) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* args[] = { managed_0 }; return Call("Cast", args, 1); }
        float Var(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallValue<float>("Var", args, 1); }
        bool HasVar(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallValue<bool>("HasVar", args, 1); }
        void SetVar(const char* name, float value) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, &value }; Call("SetVar", args, 2); }
        void ClearVar(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; Call("ClearVar", args, 1); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* storyId() const { return ReadField<void*>("storyId"); }
        void SetStoryId(void* value) const { WriteField<void*>("storyId", value); }
        int theme() const { return ReadField<int>("theme"); }
        void SetTheme(int value) const { WriteField<int>("theme", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int nationBorn() const { return ReadField<int>("nationBorn"); }
        void SetNationBorn(int value) const { WriteField<int>("nationBorn", value); }
        int openedTick() const { return ReadField<int>("openedTick"); }
        void SetOpenedTick(int value) const { WriteField<int>("openedTick", value); }
        int closedTick() const { return ReadField<int>("closedTick"); }
        void SetClosedTick(int value) const { WriteField<int>("closedTick", value); }
        bool open() const { return ReadField<bool>("open"); }
        void SetOpen(bool value) const { WriteField<bool>("open", value); }
        void* outcome() const { return ReadField<void*>("outcome"); }
        void SetOutcome(void* value) const { WriteField<void*>("outcome", value); }
        void* stepId() const { return ReadField<void*>("stepId"); }
        void SetStepId(void* value) const { WriteField<void*>("stepId", value); }
        void* nextStepId() const { return ReadField<void*>("nextStepId"); }
        void SetNextStepId(void* value) const { WriteField<void*>("nextStepId", value); }
        int dueTick() const { return ReadField<int>("dueTick"); }
        void SetDueTick(int value) const { WriteField<int>("dueTick", value); }
        int causedBy() const { return ReadField<int>("causedBy"); }
        void SetCausedBy(int value) const { WriteField<int>("causedBy", value); }
        int steps() const { return ReadField<int>("steps"); }
        void SetSteps(int value) const { WriteField<int>("steps", value); }
        int peak() const { return ReadField<int>("peak"); }
        void SetPeak(int value) const { WriteField<int>("peak", value); }
        int linkedArc() const { return ReadField<int>("linkedArc"); }
        void SetLinkedArc(int value) const { WriteField<int>("linkedArc", value); }
        void* causeText() const { return ReadField<void*>("causeText"); }
        void SetCauseText(void* value) const { WriteField<void*>("causeText", value); }
        void* causeFact() const { return ReadField<void*>("causeFact"); }
        void SetCauseFact(void* value) const { WriteField<void*>("causeFact", value); }
        void* cast() const { return ReadField<void*>("cast"); }
        void* vars() const { return ReadField<void*>("vars"); }
        void* log() const { return ReadField<void*>("log"); }
    };
}
