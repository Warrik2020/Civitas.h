#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class ResearchPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResearchPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "ResearchPanel") {}
    public:
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void OpenOrToggle() const { Call("OpenOrToggle", nullptr, 0); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* rt() const { return ReadField<void*>("rt"); }
        void SetRt(void* value) const { WriteField<void*>("rt", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* rule() const { return ReadField<void*>("rule"); }
        void SetRule(void* value) const { WriteField<void*>("rule", value); }
        void* labelRt() const { return ReadField<void*>("labelRt"); }
        void SetLabelRt(void* value) const { WriteField<void*>("labelRt", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* years() const { return ReadField<void*>("years"); }
        void SetYears(void* value) const { WriteField<void*>("years", value); }
        int tech() const { return ReadField<int>("tech"); }
        void SetTech(int value) const { WriteField<int>("tech", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* haloGo() const { return ReadField<void*>("haloGo"); }
        void SetHaloGo(void* value) const { WriteField<void*>("haloGo", value); }
        void* halo() const { return ReadField<void*>("halo"); }
        void SetHalo(void* value) const { WriteField<void*>("halo", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* barGo() const { return ReadField<void*>("barGo"); }
        void SetBarGo(void* value) const { WriteField<void*>("barGo", value); }
        void* barFill() const { return ReadField<void*>("barFill"); }
        void SetBarFill(void* value) const { WriteField<void*>("barFill", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* tab() const { return ReadField<void*>("tab"); }
        void SetTab(void* value) const { WriteField<void*>("tab", value); }
        void* count() const { return ReadField<void*>("count"); }
        void SetCount(void* value) const { WriteField<void*>("count", value); }
        void* tech() const { return ReadField<void*>("tech"); }
        void SetTech(void* value) const { WriteField<void*>("tech", value); }
        void* left() const { return ReadField<void*>("left"); }
        void SetLeft(void* value) const { WriteField<void*>("left", value); }
        void* right() const { return ReadField<void*>("right"); }
        void SetRight(void* value) const { WriteField<void*>("right", value); }
        void* bar() const { return ReadField<void*>("bar"); }
        void SetBar(void* value) const { WriteField<void*>("bar", value); }
        void* autoFrame() const { return ReadField<void*>("autoFrame"); }
        void SetAutoFrame(void* value) const { WriteField<void*>("autoFrame", value); }
        void* autoLabel() const { return ReadField<void*>("autoLabel"); }
        void SetAutoLabel(void* value) const { WriteField<void*>("autoLabel", value); }
    };
}
