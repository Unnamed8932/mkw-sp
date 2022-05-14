#pragma once

extern "C" {
#include "ServicePackTopPage.h"
}

#include "game/ui/Page.hh"
#include "game/ui/ctrl/CtrlMenuBackButton.hh"
#include "game/ui/ctrl/CtrlMenuPageTitleText.hh"

namespace UI {

class ServicePackTopPage : public Page {
public:
    ServicePackTopPage();
    void dt(s32 type) override;
    void onInit() override;

private:
    void onBack(u32 localPlayerId);

    MultiControlInputManager m_inputManager;
    CtrlMenuPageTitleText m_pageTitleText;
    PushButton m_settingsButton;
    PushButton m_tracksButton;
    PushButton m_ghostsButton;
    PushButton m_updatesButton;
    PushButton m_channelButton;
    PushButton m_aboutButton;
    CtrlMenuBackButton m_backButton;
    MultiControlInputManager::InputHandler<ServicePackTopPage> m_onBack;
};

} // namespace UI