#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class WarsPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarsPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "WarsPanel") {}
    public:
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        void* fillImg() const { return ReadField<void*>("fillImg"); }
        void SetFillImg(void* value) const { WriteField<void*>("fillImg", value); }
        void* detail() const { return ReadField<void*>("detail"); }
        void SetDetail(void* value) const { WriteField<void*>("detail", value); }
        void* le() const { return ReadField<void*>("le"); }
        void SetLe(void* value) const { WriteField<void*>("le", value); }
        void* surrGo() const { return ReadField<void*>("surrGo"); }
        void SetSurrGo(void* value) const { WriteField<void*>("surrGo", value); }
        void* surrLblA() const { return ReadField<void*>("surrLblA"); }
        void SetSurrLblA(void* value) const { WriteField<void*>("surrLblA", value); }
        void* surrLblB() const { return ReadField<void*>("surrLblB"); }
        void SetSurrLblB(void* value) const { WriteField<void*>("surrLblB", value); }
        void* surrFillA() const { return ReadField<void*>("surrFillA"); }
        void SetSurrFillA(void* value) const { WriteField<void*>("surrFillA", value); }
        void* surrFillB() const { return ReadField<void*>("surrFillB"); }
        void SetSurrFillB(void* value) const { WriteField<void*>("surrFillB", value); }
        void* surrLimitA() const { return ReadField<void*>("surrLimitA"); }
        void SetSurrLimitA(void* value) const { WriteField<void*>("surrLimitA", value); }
        void* surrLimitB() const { return ReadField<void*>("surrLimitB"); }
        void SetSurrLimitB(void* value) const { WriteField<void*>("surrLimitB", value); }
        void* surrImgA() const { return ReadField<void*>("surrImgA"); }
        void SetSurrImgA(void* value) const { WriteField<void*>("surrImgA", value); }
        void* surrImgB() const { return ReadField<void*>("surrImgB"); }
        void SetSurrImgB(void* value) const { WriteField<void*>("surrImgB", value); }
        int lastSurrA() const { return ReadField<int>("lastSurrA"); }
        void SetLastSurrA(int value) const { WriteField<int>("lastSurrA", value); }
        int lastSurrB() const { return ReadField<int>("lastSurrB"); }
        void SetLastSurrB(int value) const { WriteField<int>("lastSurrB", value); }
        int lastLimA() const { return ReadField<int>("lastLimA"); }
        void SetLastLimA(int value) const { WriteField<int>("lastLimA", value); }
        int lastLimB() const { return ReadField<int>("lastLimB"); }
        void SetLastLimB(int value) const { WriteField<int>("lastLimB", value); }
        void* peaceGo() const { return ReadField<void*>("peaceGo"); }
        void SetPeaceGo(void* value) const { WriteField<void*>("peaceGo", value); }
        void* peaceBtn() const { return ReadField<void*>("peaceBtn"); }
        void SetPeaceBtn(void* value) const { WriteField<void*>("peaceBtn", value); }
        void* peaceLbl() const { return ReadField<void*>("peaceLbl"); }
        void SetPeaceLbl(void* value) const { WriteField<void*>("peaceLbl", value); }
        int enemyId() const { return ReadField<int>("enemyId"); }
        void SetEnemyId(int value) const { WriteField<int>("enemyId", value); }
        void* lastPeaceLabel() const { return ReadField<void*>("lastPeaceLabel"); }
        void SetLastPeaceLabel(void* value) const { WriteField<void*>("lastPeaceLabel", value); }
        bool lastPeaceOn() const { return ReadField<bool>("lastPeaceOn"); }
        void SetLastPeaceOn(bool value) const { WriteField<bool>("lastPeaceOn", value); }
        void* lastRel() const { return ReadField<void*>("lastRel"); }
        void SetLastRel(void* value) const { WriteField<void*>("lastRel", value); }
        float lastScore() const { return ReadField<float>("lastScore"); }
        void SetLastScore(float value) const { WriteField<float>("lastScore", value); }
        float lastCasA() const { return ReadField<float>("lastCasA"); }
        void SetLastCasA(float value) const { WriteField<float>("lastCasA", value); }
        float lastCasB() const { return ReadField<float>("lastCasB"); }
        void SetLastCasB(float value) const { WriteField<float>("lastCasB", value); }
        int lastDays() const { return ReadField<int>("lastDays"); }
        void SetLastDays(int value) const { WriteField<int>("lastDays", value); }
        int lastPerspective() const { return ReadField<int>("lastPerspective"); }
        void SetLastPerspective(int value) const { WriteField<int>("lastPerspective", value); }
        void* lastHexA() const { return ReadField<void*>("lastHexA"); }
        void SetLastHexA(void* value) const { WriteField<void*>("lastHexA", value); }
        void* lastHexB() const { return ReadField<void*>("lastHexB"); }
        void SetLastHexB(void* value) const { WriteField<void*>("lastHexB", value); }
        void* lastNameA() const { return ReadField<void*>("lastNameA"); }
        void SetLastNameA(void* value) const { WriteField<void*>("lastNameA", value); }
        void* lastNameB() const { return ReadField<void*>("lastNameB"); }
        void SetLastNameB(void* value) const { WriteField<void*>("lastNameB", value); }
    };
}
