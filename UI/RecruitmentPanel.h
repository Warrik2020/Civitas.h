#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class RecruitmentPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RecruitmentPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "RecruitmentPanel") {}
    public:
        void Toggle() const { Call("Toggle", nullptr, 0); }
        bool TrySetDeployState(int stateId) const { void* args[] = { &stateId }; return CallStaticValue<bool>("TrySetDeployState", args, 1); }
        void FollowCurrent(int type) const { void* args[] = { &type }; CallStatic("FollowCurrent", args, 1); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        bool Prebuild() const { return CallValue<bool>("Prebuild", nullptr, 0); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        void* template_() const { return ReadField<void*>("template"); }
        void SetTemplate(void* value) const { WriteField<void*>("template", value); }
        void* cyclePrev() const { return ReadField<void*>("cyclePrev"); }
        void SetCyclePrev(void* value) const { WriteField<void*>("cyclePrev", value); }
        void* cycleNext() const { return ReadField<void*>("cycleNext"); }
        void SetCycleNext(void* value) const { WriteField<void*>("cycleNext", value); }
        void* templatesLabel() const { return ReadField<void*>("templatesLabel"); }
        void SetTemplatesLabel(void* value) const { WriteField<void*>("templatesLabel", value); }
        void* count() const { return ReadField<void*>("count"); }
        void SetCount(void* value) const { WriteField<void*>("count", value); }
        void* gold() const { return ReadField<void*>("gold"); }
        void SetGold(void* value) const { WriteField<void*>("gold", value); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* pools() const { return ReadField<void*>("pools"); }
        void SetPools(void* value) const { WriteField<void*>("pools", value); }
        void* time() const { return ReadField<void*>("time"); }
        void SetTime(void* value) const { WriteField<void*>("time", value); }
        void* recruit() const { return ReadField<void*>("recruit"); }
        void SetRecruit(void* value) const { WriteField<void*>("recruit", value); }
        void* reason() const { return ReadField<void*>("reason"); }
        void SetReason(void* value) const { WriteField<void*>("reason", value); }
        void* kit() const { return ReadField<void*>("kit"); }
        void SetKit(void* value) const { WriteField<void*>("kit", value); }
        void* forecast() const { return ReadField<void*>("forecast"); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* line() const { return ReadField<void*>("line"); }
        void SetLine(void* value) const { WriteField<void*>("line", value); }
        void* count() const { return ReadField<void*>("count"); }
        void SetCount(void* value) const { WriteField<void*>("count", value); }
        void* eta() const { return ReadField<void*>("eta"); }
        void SetEta(void* value) const { WriteField<void*>("eta", value); }
        void* barFill() const { return ReadField<void*>("barFill"); }
        void SetBarFill(void* value) const { WriteField<void*>("barFill", value); }
        void* barImage() const { return ReadField<void*>("barImage"); }
        void SetBarImage(void* value) const { WriteField<void*>("barImage", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
        void* resources() const { return ReadField<void*>("resources"); }
        void SetResources(void* value) const { WriteField<void*>("resources", value); }
    };
}
